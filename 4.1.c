#include<stdio.h>

int main() {
    int a;
    float b;
    char c;
    double d;
    printf("Nhap vao so nguyen bat ki: ");
    scanf("%d" ,&a);
    printf("\nNhap vao so kieu float: ");
    scanf("%f" ,&b);
    printf("\nNhap vao kieu char :");
    scanf("%s" ,&c);
    printf("\nNhap vao kieu so double: ");
    scanf("%lf" ,&d);

    printf("\n%-20s%-10s","Kieu du lieu","Gia tri");
    printf("\n%-20s%-10d","int",a);
    printf("\n%-20s%-10f","float",b);
    printf("\n%-20s%-10c","char",c);
    printf("\n%-20s%-10lf","double",d);

}
