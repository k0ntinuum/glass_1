#define N 16 //bits in elements of T
#define M 16 //bits in elements of S 
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "constant.c"
#include "text.c"
#include "chi.c"
#include "print.c"
#include "enc.c"
#include "dec.c"
#include "test.c"
#include "random.c"




int main() {
    
    uint16_t T[card_T] = {0};
    uint16_t S[card_S] = {0};
    create_perm(T, card_T);
    create_perm(S, card_S);
    cls();
    for (int i = 0; i < 10; i++) test_dec(T,S);
}
      