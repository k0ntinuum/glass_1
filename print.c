void print_bit(int b) { b == 0 ? printf("O") : printf("|"); }
void print_v(int* v, int L) { for (int i = 0; i < L; i++) print_bit(v[i]); }
void print_bits(uint16_t x ) {
    for (int i = 0 ; i < 16; i++ ) print_bit((x & ( 1 << i))>>i);
    //printf("\n");
}

void bit_print_fwd(uint16_t x, uint16_t y[N]) {
    printf("\n\nf  ");print_bits(x);printf("\n\n");
    for (int i = 0; i < N; i++) {printf("   ");print_bits(y[i]);printf("\n");}
}

void bit_print_rvs(uint16_t d, uint16_t y[N]) {
    printf("\n\ng\n");
    for (int i = 0; i < N; i++) {printf("   ");print_bits(y[i]);printf("\n");}
    printf("\n\n   ");print_bits(d);printf("\n\n"); 
}

