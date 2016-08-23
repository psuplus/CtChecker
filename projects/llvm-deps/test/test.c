#include<stdio.h>
#include<stdlib.h>

const int BLOCK_SZ = 64; // An architecture with memory blocks of 64 Bytes
const int spacing = 8; // spacing for the location for the next byte, assuming a window of 3bits
const int N = 16; // assume each precomputed value p has 16 bytes, which occupies two memory blocks after scattering

// align the starting address to BLOCK_SZ
char* align(char* buf) {
  uintptr_t addr = (uintptr_t) buf;
  return (char*)(addr - (addr&(BLOCK_SZ-1)) + BLOCK_SZ);
}

// store a precomputed value (p) for 3bits of key (k) into the buffer (buf)
void scatter(char* buf, char p[][16], int k) {
  for (int i=0; i<N; i++) {
    buf[k+i*spacing] = p[k][i];
  } 
}

void gather(char* r,char* buf,int k) {
  for (int i=0; i<N; i++) {
    r[i] = buf[k+i*spacing]; 
  }
}

int main() {
  //2 blocks for precomputed values, 1 block for alignment
  char* mem=malloc(BLOCK_SZ*2+BLOCK_SZ); 
  char* buffer = align(mem);
  char precomputed[8][16];
  // char gathered[8][16];
  int key = 6; // pretend this is the secret key
  char result[16];
  
  // initialize precomputed
  for (int i=0; i<8; i++) {
    for (int j=0; j<N; j++) {
      precomputed[i][j] = i+j;
    }
  }

  // scatter and gather
  for (int i=0; i<8; i++) {
    scatter(buffer,precomputed,i);
  }

  gather(result,buffer,key);
  /* simple test
  for (int i=0; i<8; i++) {
    gather(gathered[i],buffer,i);
  }

  for (int i=0; i<8; i++) {
    for (int j=0; j<N; j++) {
      if (precomputed[i][j]!=gathered[i][j]) {
        printf("error\n");
        free(mem);
        exit(0);
      }
    }
  } */
  free(mem);
}
