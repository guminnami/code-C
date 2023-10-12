//b1:Viet ham kiem tra xem 1 so co phai so nguyen to khog
//b2:viet ham in ra tat ca cac so nguyen to trong 1 khoang [a,b] voi a,b la nguyen duong
//b3:viet ham kiem tra 1 so nguyen duong co phai la tong cua 2 so nguyen to kh? neu co in ra 2 so do!

#include<stdio.h>
#include<math.h>

int is_prime(int n){ 
    if (n <= 1) return 0;
    else{
        int i = 2;
        while( i*i <= n ){
            if (n % i == 0) return 0;
            i++;
        } return 1;
    }
}

//int main(){
//     printf("%d", is_prime(5));
// }


void list_prime(int a, int b){
    for(int i = a; i <= b; i++) {
        if(is_prime(i) == 1) printf("%d", i);
    }
}
void check_sum_prime(int n){
    if(n <= 3) printf("\n%d khong la tong cua 2 so nguyen to.", n);
    else {
        for ( int a =  2; a <= n - 2; a++){
            if (is_prime(a) == 1){
                if (is_prime(n-a) == 1 && a <= n -a){
                    printf("%d = %d + %d\n", n, a, n-a);
                }
            }
        }
    }
}
// int main(){
    // int a, b;
    // printf("Enter [a,b]: ");
    // scanf("%d%d", &a, &b);
//     while(a>b || b<2 || a<0){
//         printf("Invalid input. Re-enter [a,b]: ");
//         scanf("%d%d", &a, &b);
//     } list_prime(a, b);
//     check_sum_prime(18);
// }


