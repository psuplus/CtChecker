int relabel(int to_be_relabel, int predicate, char* label_dynamic, char* label_static);
// {
//   if (predicate) {
//     return to_be_relabel;
//   } else {
//     exit();
//   }
// }

int library(int book, int retur) {
  int note;
  int Alice;
  int start = 0;
  char* label_book = "retur?P <-> S";
  char* pub_book = "P";
  char* priv_book="S";
  //if ()
  //question mark label
  //In the analysis transfer ? string to the constraints
  // public = bid + 1;
while(start==0){
 if (retur==1){
   Alice = note + 1;
 // Alice = relabel(book, retur, label_book, pub_book) + 1;
 // note = (int)book/2;
  }
  else{
 // relabel(book, retur, label_book, priv_book);// Alice can no longer access
  Alice = relabel(book, retur, label_book, pub_book) + 1;
  note = (int)book/2;
 // Alice = note + 1;
  }
}
  return Alice;
}
