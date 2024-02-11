int relabel(int to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);
// {
//   if (predicate) {
//     return to_be_relabel;
//   } else {
//     exit();
//   }
// }

int transaction(int card, int trans) {
  int store = 0;
  int output = 0;
  char *label_card = "trans ? public -> private";
  char *label_store = "trans ? public -> private";

  if (trans == 1) {

    store = card + 1;
    store = 0;
    output = store + 1;
    // store = relabel(card, release, label_bid, static_bid);
  }

  return output;
}