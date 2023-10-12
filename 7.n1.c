#include<stdio.h>
int main() {
    int d;
    do{ 
    printf("Nhap diem: ");
    scanf("%d", &d);
    }
    while(d < 0 || d > 10)
    }
    printf("Diem vua nhap la: %d", d);
}
   