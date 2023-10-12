
// 1.Viet ham nhap du lieu cho ma tran n * n
// 2.Viet ham in ra ma tran n*n theo hang va cot
// 3.Viet ham tinh otng cac duong cheo tren ma tran

#include<stdio.h>
void input_matrix(double a[][100], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (i = 0; i < n; i++){
            printf("a[%d][%d] = ", i, j);
            scanf("%lf", &a[i][j]);
    }
}
}

void display_matrix(double a[][100], int n){
    int i, j;
    for (i = 0; i < n; i++){
            printf("| ");
            for(j = 0; j < n; j++){
                printf("%.2lf ", a[i][j]);
            }
            printf("|\n");
}}

double sum_dc(double a[][100], int n){
    int i;
    double sum_dc = 0;
    for(i = 0; i < n; i++){
        sum_dc += a[i][i];
    }
    return sum_dc;
}

double sum_cl(double a[][100], int n){
    int i, j;
    double sum_cl = 0;
    for(i = 0; i < n; i++){
        if(i % 2 == 1){
            for(j = 0; j < n; j++){
                if (j % 2 == 0){
                    sum_cl += a[i][j];
                }     
            }
        }
    }
    return sum_cl;
}

void transpose(double a[][100], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (i = 0; i < n; i++){
                double t = a[i][j];
                a[i][j]= a[j][i];
                a[j][i] = t;
                }
        }
    }

void move_column(double a[][100], int n, int x, int y){
    int i, j;
    for (i = 0; i < n; i++){
                double t = a[i][x];
                a[i][x]= a[i][y];
                a[i][y] = t;
}}

void move_(double a[][100], int n, int x, int y){
    int i, j;
    for (i = 0; i < n; i++){
                double t = a[i][x];
                a[i][x]= a[i][y];
                a[i][y] = t;
}}

int main(){
    double a[100][100];
    int n;
    printf("Enter n for matrix 3*3: ");
    scanf("%d", &n);
    input_matrix(a, n);
    display_matrix(a, n);
    double sum = sum_dc(a,n);
    printf("Tong cac phan tu tren duong cheo: %2.lf\n", sum);
    double sum = sum_cl(a,n);
    printf("Tong cac phan tu o vi tri chan trong cac cot le: %2.lf", sum);
    transpose(a, n);
    display_matrix(a, n);
 }

