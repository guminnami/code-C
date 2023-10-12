//tinh gia tri gan dung cua e^x biet rang
// e^x = 1 + x/1! + x^2/2! + ... + x^n/n!
//voi sai so eps va x dc nhap tu nguoi dung
//chu y: kh dung thu vien math.h
#include<stdio.h>
double power(double x, int n){
    int a = 1;
    for(int i = 1; i < n; i++){
        a *= x;
    }
    return a;
}
long int gt(int n){
    if (n == 0) return 1;
    else{
        long int a = 1;
        for(int i = 1; i <= n; i++){
            a *= i;
    } return a;
    }
}
double tinh_e_x(double x, double eps){
    int n;
    double e_x = 1;
    while(power(x,n) / gt(n) > eps){
        e_x += power(x,n) / gt(n);
        n++;
        
    }
    printf("e^%.2lf = %6.lf, n = %d", x, e_x, n);
    return e_x;
}
int main(){
    tinh_e_x(3,00001);
}