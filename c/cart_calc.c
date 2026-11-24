// cart subtotal calculation in C
// compiled to wasm so it can run in browser

int calculate_subtotal(int *prices, int *qtys, int n) {
    int sum = 0;
    int i;
    for (i = 0; i < n; i++) {
        sum += prices[i] * qtys[i];
    }
    return sum;
}
