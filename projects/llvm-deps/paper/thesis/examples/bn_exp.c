for (;;) {
  if (BN_is_bit_set(p, wstart) == 0) {
      if (!start)
          if (!BN_mod_mul(r, r, r, m, ctx))
              goto err;
      if (wstart == 0)
          break;
      wstart--;
      continue;
  }
  /*
    * We now have wstart on a 'set' bit, we now need to work out how bit
    * a window to do.  To do this we need to scan forward until the last
    * set bit before the end of the window
    */
  j = wstart;
  wvalue = 1;
  wend = 0;
  for (i = 1; i < window; i++) {
      if (wstart - i < 0)
          break;
      if (BN_is_bit_set(p, wstart - i)) {
          wvalue <<= (i - wend);
          wvalue |= 1;
          wend = i;
      }
  }

  /* wend is the size of the current window */
  j = wend + 1;
  /* add the 'bytes above' */
  if (!start)
      for (i = 0; i < j; i++) {
          if (!BN_mod_mul(r, r, r, m, ctx))
              goto err;
      }

  /* wvalue will be an odd number < 2^window */
  if (!BN_mod_mul(r, r, val[wvalue >> 1], m, ctx))
      goto err;

  /* move the 'window' down further */
  wstart -= wend + 1;
  wvalue = 0;
  start = 0;
  if (wstart < 0)
      break;
}
