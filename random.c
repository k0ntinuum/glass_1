void shuffle(uint16_t* f, int l) {
    int j = 0;int t = 0;
    for (int i = l - 1; i > 0; i -= 1) {
        j = arc4random_uniform(i+1);
        t = f[i];f[i] = f[j];f[j] = t;
    }
}
void create_perm(uint16_t* t, int L) {
    for (int i = 0; i < L ; i++) t[i] = i;
    shuffle(t, L);
}
