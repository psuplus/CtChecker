int relabel(int to_be_relabel, int predicate, char *label_dynamic,
            char *label_static);
// {
//   if (predicate) {
//     return to_be_relabel;
//   } else {
//     exit();
//   }
// }

int release_bid(int bid1, int bid2, int release) {
  int bid;
  int general;
  int secret;
  char *label_bid = "release ? S -> P";
  char *static_bid = "P";
  int start = 0;
  bid = bid1 > bid2 ? bid1 : bid2;

  //  public = bid + 1;
  while (start==0){
	if(release==0){
       	secret = bid;
	}
	else{
	 general = relabel(bid, release, label_bid, static_bid);
	}}
return general;
}
