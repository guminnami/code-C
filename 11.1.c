//11.1
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &b);
//     int *p;
//     p = &a;
//     printf("%p\n", p);
//     p = &b;
//     printf("%p\n", p);
//     p = &c;
//     printf("%p\n", p);

// }

//11.3
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a, b, c: ");
//     scanf("%d %d %d", &a, &b, &b);
//     int *p;
//     p = &a;
//     *p += 100;;
//     printf("p_a = %p, a = %d\n", p, *p);
//     p = &b;
//     *p += 100;
//     printf("p_b = %p, b = %d\n", p, *p);
//     p = &c;
//     *p += 234;
//     printf("p_c = %p, c = %d\n", p, *p);

// }

//11.2
// #include<stdio.h>
// void swap_3(int *a, int *b, int *b){


// }

//11.7
// #include<stdio.h>
// #include<time.h>
// #include<stdlib.h>
// #include<math.h>

// void input(double luong[],int nam[], int n){
//     srand(time(NULL));
//     for (int i = 0; i < n; i++){
//         luong[i] = (rand() % (200 - 100) + 100) / 10.0;
//         nam[i] = rand() % 10;
//     }
// }

// void output(double luong[], int nam[], int n){
//     printf("Salary: ");
//     for (int i = 0; i < n; i++){
//         printf("%.1lf ", luong[i]);
//     }
//     printf("\n");
    
//     printf("Year : ");
//     for(int i = 0; i < n; i++){
//         printf("%d ", nam[i]);
//     }
//     printf("\n");
// }
// void tang_luong(double luong[],int nam[], int n){
//     for(int i = 0; i < n; i++){
//     int t = nam[i] / 3;
//     luong[i] *= pow(1.01, t);
// }
// }
// int main(){
//     double luong[1000];
//     int nam[1000];
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     input(luong, nam, n);
//     output(luong, nam, n);
//     tang_luong(luong, nam, n);
//     printf("Sau khi tang luong: \n");
//     output(luong, nam, n);
// }





