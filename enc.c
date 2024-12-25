uint16_t _enc(uint16_t T[card_T], uint16_t S[card_S], int d, uint16_t x) {
    uint16_t r = 0;
    int code = chi_value(T, d, x);
    for (int i = 0; i < SEARCH_LIMIT; i++) {
        r = arc4random_uniform(card_S);
        if (chi_value(S, d, r) == code) return r;
    }
    printf("\nFAILURE TO ENCODE\n");
    return 0;
}

void enc(uint16_t T[card_T], uint16_t S[card_S], uint16_t x, uint16_t y[N]) {
    uint16_t T_code[N];
    uint16_t S_code[N];
    for (int i = 0; i < N; i++) y[i] = _enc(T, S, i, x);
    chi_S_code(S, y, S_code);
    chi_T_code(T, x, T_code);
    if (! code_vec_eq(S_code,T_code)) printf("\nencoding error\n");
}

