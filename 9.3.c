// viet chuong trinh con cho phep nhap vao 3 so nguyen duong
// la cac he so cua phuong trinh bac 2( kiem tra tinh dug dan)
// viet ham tinh delta
// viet ham giai phuong trinh
// goi ham main va dua ra ket qua

#include<stdio.h>
#include<math.h>
int input_data(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(a <= 0){
        printf("Re-enter: ");
        scanf("%d", &a);
    }
    return a;
}
void input_all(int* a, int* b, int* c){
    printf("Enter a numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    while(*a <= 0 || *b <= 0 || *c <= 0){
        printf("Re-enter: ");
        scanf("%d%d%d", &a, &b, &c);
    }
}
double tinh_delta(int a, int b, int c){
    return(double) b*b - 4*a*c;
}
void giai_pt(int a, int b, int c){
    double delta = tinh_delta(a,b,c);
    if(delta < 0){
        printf("Phuong trinh vo nghiem.\n");
    }
    else{
        if(delta == 0);
        printf("Phuong trinh co nghiem duy nhat:\n");
        printf("x1 = %.2lf\n", (-b - sprt(delta))/ (2*a));
        printf("x1 = %.2lf", (-b + sqrt(delta))/ (2*a));

    }
}
}
int main(){
    int a, b, c;
    a = input_data;
    b = input_data;
    c = input_data;
    //printf("%d%d%d\n", a, b, c);
    //input_all(&a, &b, &c);
    //printf("%d%d%d", a, b, c);
}


