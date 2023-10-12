//12.4
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void input(double a[][3], int n){
    srand(time(NULL));
    for(int i = 0; i < n; i++){
        a[i][0] = (rand() % 100) / 1.0;
        a[i][1] = (rand() % 100) / 1.0;
        a[i][2] = (rand() % 100) / 1.0;
    }
 }
void output(double a[][3], int n){
    printf("Cac dau thu: ");
    for(int i = 0; i < n; i++){
        printf("\nSuc manh: %.2lf, Nhanh nhen: %.2lf, Mau: %.2lf", a[i][0], a[i][1], a[i][2]);
    }}

void arena(double a[][3], int n){
    double max = 0;
    for(int i = 0; i < n; i++){
        if(a[i][0] + a[i][1] + a[i][2] > max){
            max = a[i][0] + a[i][1] + a[i][2];
        }
    }
    for(int i = 0; i < n; i++){
        if(a[i][0] + a[i][1] + a[i][2] = max){
            a[i][0] *= 1.02;
            a[i][1] *= 1.02;
            a[i][2] *= 1.02;
        }
        else{
            a[i][0] *= 1.01;
            a[i][1] *= 1.01;
            a[i][2] *= 1.01;
        }
        double t = (rand() % 5))/1.0;
        a[i][0] *= 1 + t;
        a[i][1] *= 1 + t;
        a[i][2] *= 1 + t;
    }

int  main(){
    double a[100][3];
    int n;
    printf("So dau thu: ");
    scanf("%d", &n);
    input(a, n);
    output(a, n);
    printf("\nSo lan danh nhau: ");
    scanf("%d", &t);
    arena(a, n);
    output(a, n);
}