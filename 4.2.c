#include<stdio.h>
#define PI 3.14
int main() {
    float r;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);
    printf("Dien tich hinh tron la: %.3f", PI*r*r);
    printf("\nChu vi hinh tron la: %.3f", 2*PI*r);
    return 0;

}