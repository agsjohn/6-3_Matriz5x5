#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 5  

main() {
  int l, c, m[TAM][TAM], cont = 9;
  srand(time(NULL));
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      cont++;
      m[l][c] = cont;
    }
  }
  printf("Matriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}