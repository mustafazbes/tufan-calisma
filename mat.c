#include "mat.h"

int topla(int a, int b) {
    return a + b;
}

int faktoriyel(int n) {
    int sonuc = 1;
    for (int i = 1; i <= n; i++) {
        sonuc *= i;
    }
    return sonuc;
}
