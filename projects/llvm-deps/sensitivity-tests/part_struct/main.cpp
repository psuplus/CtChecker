typedef struct {
  int rd_key;
  int rounds;
} AES_KEY;

int main(void) {
  AES_KEY pk;
  // Only the rd_key element is tainted

  pk.rounds = 3;
  pk.rd_key = 4;

  if(pk.rounds) // Not reported by Vulnerable Branch
    ;

  if(pk.rd_key) // Reported by Vulnerable Branch
    ;

  return 0;
}
