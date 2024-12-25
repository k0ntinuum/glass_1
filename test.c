void test_encode( uint16_t T[card_T], uint16_t S[card_S]) {
    int d = arc4random_uniform(N);
    //uint16_t x = arc4random_uniform(card_T);
    uint16_t x = 20;
    uint16_t y[N]; 
    enc(T, S, x, y);
    bit_print_fwd(x,y);
}

void test_dec(uint16_t T[card_T], uint16_t S[card_S]) {
    //uint16_t x = arc4random_uniform(card_T);
    uint16_t x = 0;//to show same input many outputs
    uint16_t d = 0;
    uint16_t y[N]; 
    enc(T, S, x, y);
    bit_print_fwd(x,y);
    d = dec(T, S, y);
    if (x != d) printf("\n\nFAILURE TO DECODE\n\n");
}