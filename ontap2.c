// Viet ham kiem tra xem mot so co la so doi xung hay kh?
// Viet ham de dao nguoc 1 so ngyen duong
// viet ham kiem tra xem 1 so nguyen duong co la so doi xung kh
#include<stdio.h>
#include<math.h>
int count_digit(int n){
    int count = 0;
    if(n < 0){
        n = -n;
    }
    while(n > 0){
        n = n/10;
        count ++;
    }
    return count;
}

int reverse(int n){
    int m = 0;
    if (n % 10 == 0){
        return 0;
    }
    else {
        while (n > 0)
        { int k = n % 10;
        n = n / 10;
        m += k * pow(10, count_digit(n));
        }
        return m;
    }

int check_amstrong(int n) {
    if (reverse(n) == n) return 1;
    else return 0; 
}

int main() {
    printf("%d", count_digit(12345));
    printf("%d\n", reverse(12345));
    printf("%d\n", check_amstrong(12345));
    printf("%d", check_amstrong(12345));
}