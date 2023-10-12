// tinh so pi bang do while
#include<stdio.h>
#include<math.h>

int main() {
    int n = 1, gt = 1;
    double eps, sinx = 0;
    printf("Enter epsilon: ");
    scanf("%lf", &eps);
    while(eps >= 1 || eps <= 0){
        printf("Re-Enter epsilon: ");
        scanf("%lf", &eps);
    } double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    sinx = x;//n=0
    //n=1 tro di
    while ((double) fabs(pow(-1, n) * pow(x, 2*n+1) / gt) >= eps) {
        gt *= (2*n) * (2*n+1);
        sinx += pow(-1, n) / pow(x, 2*n+1) / gt;
        n++;
    }
    printf("sinx(%.2lf = %.10lf, n = %d", x, sinx, n);
}