#include<stdio.h>
int main() {
    char option;
    do{
    double a, b;
    char c;
    printf("Nhap vao 2 so thuc: ");
    scanf("%lf %lf", &a, &b);
    printf("Chon (+, -, *, /) de thuc hien phep tinh: ");
    scanf("%c", &c);
    fflush(stdin);
    switch(c){
        case '+':
            printf("a + b = %.2lf\n", a+b);
            break;
        case '-':
            printf("a - b = %.2lf\n", a-b);
            break;
        case '*':
            printf("a * b = %.2lf\n", a*b);
            break;
        case '/':
            printf("a / b = %.2lf\n", a/b);
            break;
    
    
    default: printf("Khong the thuc hien phep tinh!");
        break;
    }
    char option;
    printf("Ban co muon tiep tuc chuong trinh khong?(y/n): ");
    scanf("%c", &option);
     fflush(stdin);
    } while(option != 'n');
   return 0;
}