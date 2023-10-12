#include<stdio.h>
int main() {
    float a, b, c, max;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    max = (a < b) ? b : a;
    max = (max < c) ? c : max;
    printf("Max(a,b,c) = %.1f", max);
}