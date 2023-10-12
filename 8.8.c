#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x * x) / exp(x);
}

double tich_phan(int n) {
    double h = 1.0 / n;
    double S = 0.5 * (f(0) + f(1));
    for (int i = 1; i < n; i++) {
        double x = i * h;
        S += f(x);
    }
    return h * S;
}

int main() {
    double a = 0.0;   // c?n du?i
    double b = 1.0;   // c?n tr�n
    double eps = 0.0001;  // d? ch�nh x�c
    double S0 = 0.0, S1 = 0.0;  // gi� tr? t�ch ph�n c?a 2 l?n t�nh li�n ti?p
    int n = 1;  // s? lu?ng chia ban d?u

    do {
        S0 = S1;
        S1 = tich_phan(n);
        n *= 2;  // tang s? l?n chia l�n 2 l?n
    } while (fabs(S1 - S0) > eps);  // l?p d?n khi d?t d?n d? ch�nh x�c c?n thi?t

    printf("KQ: %.4lf\n", S1);

    return 0;
}