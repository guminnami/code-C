// #include<stdio.h>
// int main(){
//     int luaChon;
//     do{
//     printf("\n=====MENU====\n1. Tinh tong 2 so nguyen.\n2. Tinh hieu 2 so nguyen.""\n3. Tinh tich 2 so nguyen.\n4. Chia nguyen hai so nguyen ""\n0. Thoat.\nBan chon?\n");
//     scanf("%d", &luaChon);
//     switch(luaChon ){
//         case 0: 
//         break;
//         case 1:{
//             int a, b;
//             printf("\nNhap a, b: ");
//             scanf("%d%d", &a, &b);
//             printf("\n%d + %d = %d", a, b, a + b);
//             break;
//         }
//         case 2:{
//             int a, b;
//             printf("\nNhap a, b: ");
//             scanf("%d%d", &a, &b);
//             printf("\n%d - %d = %d", a, b, a - b);
//             break;
//         }
//         case 3:{
//             int a, b;
//             printf("\nNhap a, b: ");
//             scanf("%d%d", &a, &b);
//             printf("\n%d * %d = %d", a, b, a * b);
//             break;
//         }
//         case 4:{
//             int a, b;
//             printf("\nNhap a, b: ");
//             scanf("%d%d", &a, &b);
//             printf("\n%d / %d = %d", a, b, a / b);
//             break;
//         }
//     }
// }   while(luaChon != 0);
//     return 0;
// }

//2.

// #include<stdio.h>
// int main(){
//     int count = 5;
//     while (count <= 10){
//         printf("Gia tri count = %d\n", count);
//         ++count;
//     }
//     return 0;
// }

// 3.tinh tong tu 1 den n
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int sum = 0; a = 1;
//     scanf("%d", &a);
//     do{
//         sum += a;
//         ++a;
//     }while(a<10);
//     printf("sum = %d\n", sum);
//     return 0;
// }

 //vong lap for
//  #include<stdio.h>
//  int main(){
//  int i = 0;
//  int sum = 0;
//  for ( ; i < 100; ){
//     sum += i;
//     i++;
//  }
//  printf("sum = %d\n", sum);
//  return 0;
//  }

//vong lap long nhau
// #include<stdio.h>
// int main(){
//     int i, j, count = 0;
//     i = 100; j = 200;
//     for(i = 0; i < 10; i++){
//        if(i % 2 == 1)
//             continue;
//             printf("\ni = %d", i);
//     }
//         return 0;
//     }

// ham
// #include<stdio.h>

// int max(int a, int b){
//     if(a>b) return a;
//     return b;
// }
// int tong(int a, int b){
//     return a + b;
// }
// void hieu(int a, int b){
//     printf("%d - %d = %d", a, b, a - b);
// }
// int main() {
//     int a = 10, b = 5;
//     printf("max la : %d", max(7, 67));
// }

//goi ham (tham chieu)
// #include<stdio.h>
// int a, b;
// void swap(int a, int b){
//     int tmp = a;
//     a = b;
//     b = tmp;
// }
// int main(){
//     int a = 100; b = 200;
//     swap(a, b);
//     printf("a = %d,b = %d ", a, b);
// }
 
//ham sinh so ngau nhien
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main(){
//     int i;
//     srand(time(NULL));
//     for(i= 0;i<20;i++){
//         int random = 1 + rand()%19;
//         printf("%10d", random);
//     }
//     return 0;
// }

//cac ham trong math.h
// #include<stdio.h>
// #include<math.h>
// int main(){
//     double a = 58.88;
//     printf("%5.lf", round(a));
//     return 0;
// }

// ham de quy
// #include<stdio.h>
// int giaiThua(int n){
//     if(n == 0 || n == 1) return 1;
//     else return n *giaiThua(n - 1);
// }

// int main(){
//     int i;
//     for(i = 0; i < 6;i++){
//         printf("%d! = %lld\n", giaiThua(i));
//     }
//     return 0;
// }
     

//so fibonacy
// #include<stdio.h>
// unsigned long long fibo(int n){
//     if( n == 0 || n == 1)
//     return n;
//     else return(fibo(n-1)+fibo(n-2));
// }
// int main(){
//     int i;
//     for(i = 0; i <21;i++){
//         printf("fibo(%d) = %lld\n", i, fibo(i));
//     }
//     return 0;
// }


// mang 1 chieu: in day so ngau nhien
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #define MAX 10

// int main(){
//     srand(time(NULL));
//     int i;
//     int arr[MAX];
//     for(i = 0; i < MAX; i++){
//         arr[i] = rand();
//     }
//     for(i = 0; i < MAX; i++){
//         printf("arr[%d] = %d\n", i, arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a, b, c;
//     printf("so thu 1: ");
//     scanf("%d", &a);
//     printf("so thu 2: ");
//     scanf("%d", &b);
//     c = a+b;
//     printf("%d + %d = %d\n", a, b, c);

// }

//su dung while nhap diem sinh vien
// #include<stdio.h>
// #define Enter 10
// int main(){
//     float d;
//     printf("diem cua sinh vien la: ");
//     scanf("%f", &d);
//     while(d<0 || d>10){
//         printf("Diem khong hop le!Nhap lai: ");
//         scanf("%f", &d);
//     }
//     printf("\ndiem ban vua nhap la: %7.4f", d);
// }

//sd vong lap do-while dem so tu 1-n
// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main(){
//     int i=1, N;
//     printf("Nhap N: ");
//     scanf("%d", &N);
//     do{
//         printf("%d ", counter);
//     } while (i++ <= N);
// }

//sd continue va break de nhap cac ki tu
// #include<stdio.h>
// #define ENTER '\n'
// int main(){
//     char c;
//     printf("Nhap vao cac ki tu(An enter de ket thuc!): ");
//     while(c != -1){
//         c = getchar();
//         if(c == ENTER) break;
//         else 
//         if (c>= 0 && c <=9) continue;
//         else putchar(c);
//     }
//     putchar(ENTER);
// }

// #include<stdio.h>
// int main() {
//     int i = 1, sum = 0;
//     do{
//         sum += 1;
//         i++;
//     }while(i <= 50);
//     printf("sum = %d, i = %d", sum, i);
//     i = 1; sum = 0;
//     while (i <= 50){
//         sum += 1;
//         i++;
//     }
// }

//tinh giai thua
// #include<stdio.h>

// int factorial(int n) {
//     if (n == 0) {
//         return 1;
//     } else {
//         return n * factorial(n-1);
//     }
// }

// int main() {
//     int num;
//     printf("Nhap so nguyen duong: ");
//     scanf("%d", &num);
    
//     if (num < 0) {
//         printf("So nhap vao khong hop le!\n");
//     } else {
//         int result = factorial(num);
//         printf("%d! = %d\n", num, result);
//     }
    
//     return 0;
// }
// #include <stdio.h>
 

//  float average(float age[]) {
//  int i;
//  float avg, sum = 0.0;
//  for (i = 0; i < 6; ++i) {
//   sum += age[i];
//  }
//  avg = (sum / 6);
//  return avg;
// }

// int main() {
//  float avg, age[] = { 23.4, 20, 22.6, 3, 40.5, 18};
//  avg = average(age); // chi ten cua mang duoc truyen nhu mot doi so
//  printf("Tuoi trung binh la: = %.2f", avg);
//  return 0;
// }

//mang lamm doii soo cuaa hamm
// #include<stdio.h>
// #define N 8
// void test(int a[][N], int m, int n){
//     int i, j;
//     printf("\nMang a duoc truyen vao ham: ");
//     for(i = 0; i <m; i++ ){
//         printf("\n");
//         for(j = 0; j< n; j++)
//         printf("%5d", a[i][j]);
//     }
//     for(i = 0; i <m; i++ )
//         for(j = 0; j< n; j++)
//         a[i][j] += 2;
//     printf("\nMang a ham sau khi bi thay doi trong ham: ");
//     for(i = 0; i< m; i++){
//         printf("\n");
//         for(j = 0; j < n; j++)
//         printf("%5d", a[i][j]);
//     }

// }

//khoi tao mang 1 chieu
// #include <stdio.h>
 
// void nhapMang(int a[], int n) 
// {
//     int i;
//     // thuc hien nhap tung phan tu mang
//     for (i = 0; i < n; i++) {
//         printf("Nhap a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }
 
// void xuatMang(int a[], int n) 
// {
//     int i;
//     for (i = 0; i < n; i++) {
//         printf ("%d \t", a[i]);
//     }
// }
 
// int main() 
// {
//     // khai bao mang a co n phan tu
//     int n = 5;
//     int a[n];
//     nhapMang(a, n);
//     xuatMang(a, n);
 
//     return 0;
// }

//khai bao mang 2 chieu
#include <stdio.h>
#define MAX 10
 
// nhap mang n hang, m cot
void nhapMang(int a[MAX][MAX], int n, int m) 
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
 
// xuat mang n hang, m cot
void xuatMang(int a[MAX][MAX], int n, int m) 
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf ("%-3d", a[i][j]);
        }
        printf("\n"); // xuong dong khi het 1 dong
    }
}
 
int main() 
{
    // khai bao mang a co n phan tu
    int n = 2, m = 3;
    int a[MAX][MAX];
    nhapMang(a, n, m);
    xuatMang(a, n, m);
 
    return 0;
}