for (;;)
if (e == 0)
{
  j += c;
  if ( --i < 0 )
    break;

  e = ep[i];
  c = BITS_PER_MPI_LIMB;
}
else
{
  int c0;
  mpi_limb_t e0;
  struct gcry_mpi w, u;
  w.sign = u.sign = 0;
  w.flags = u.flags = 0;
  w.d = base_u;

  count_leading_zeros (c0, e);
  e = (e << c0);
  c -= c0;
  j += c0;

  e0 = (e >> (BITS_PER_MPI_LIMB - W));
  if (c >= W)
    c0 = 0;
  else
    {
      if ( --i < 0 )
        {
          e0 = (e >> (BITS_PER_MPI_LIMB - c));
          j += c - W;
          goto last_step;
        }
      else
        {
          c0 = c;
          e = ep[i];
          c = BITS_PER_MPI_LIMB;
          e0 |= (e >> (BITS_PER_MPI_LIMB - (W - c0)));
        }
    }

  e = e << (W - c0);
  c -= (W - c0);

last_step:
  count_trailing_zeros (c0, e0);
  e0 = (e0 >> c0) >> 1;

  for (j += W - c0; j >= 0; j--)
    {

      /*
        *  base_u <= precomp[e0]
        *  base_u_size <= precomp_size[e0]
        */
      base_u_size = 0;
      for (k = 0; k < (1<< (W - 1)); k++)
        {
          w.alloced = w.nlimbs = precomp_size[k];
          u.alloced = u.nlimbs = precomp_size[k];
          u.d = precomp[k];

          mpi_set_cond (&w, &u, k == e0);
          base_u_size |= ( precomp_size[k] & (0UL - (k == e0)) );
        }

      w.alloced = w.nlimbs = rsize;
      u.alloced = u.nlimbs = rsize;
      u.d = rp;
      mpi_set_cond (&w, &u, j != 0);
      base_u_size ^= ((base_u_size ^ rsize)  & (0UL - (j != 0)));

      mul_mod (xp, &xsize, rp, rsize, base_u, base_u_size,
                mp, msize, &karactx);
      tp = rp; rp = xp; xp = tp;
      rsize = xsize;
    }

  j = c0;
  if ( i < 0 )
    break;
}
