#include<stdio.h>
#include<math.h>
int main() {
    float a, b, c, delta;
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);
    delta = b*b - 4*a*c;
    (delta < 0) ? printf("No solution!") : (
        (delta == 0) ? printf("no: %.2f", -b/(2*a)) :
        printf("n1 = %.2f,n2 = %.2f ", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a)));  

}