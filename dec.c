uint16_t dec(uint16_t T[card_T], uint16_t S[card_S], uint16_t y[N]) {
    uint16_t T_code[N];
    uint16_t S_code[N];
    chi_S_code(S, y, S_code);
    for (uint16_t i = 0; i < card_T; i++) {
        chi_T_code(T, T[i], T_code);
        if (code_vec_eq(T_code, S_code)) return T[i];
    }
    return 0;
}