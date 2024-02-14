int relabel(int to_be_relabel, int predicate, char* label_dynamic, char* label_static);
// {
//   if (predicate) {
//     return to_be_relabel;
//   } else {
//     exit();
//   }
// }

int transaction(int card, int trans) {
  int store;
  int store1;
  int output;
  char *label_card = "trans ? P -> S";
  char *label_store = "trans ? P -> S";
  char *static_L = "S";
  if (trans == 1) {
//    store = relabel(card, trans, label_card, static_L);
//    card = relabel(card, trans, label_store, static_L);
    store = card + 1;
    store1 = 0;
    output = store1 + 1;
    
  }

  return output;
}
