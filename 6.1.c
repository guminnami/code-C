#include<stdio.h>
int main() {
    int a;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &a);
    if (a < 10) {
        printf("So vua nhap nho hon 10: ");
    } else {
        if (a == 10){
            printf("So vua nhap bang 10: ");
        } else {// a >= 10
            if (a < 20){
                printf("so vua nhap nho hon 20 lon hon 10: ");
            }
            else {// a>= 20
            if (a == 20) {
                printf("so vua nhap la 20: ");
            }
            
            }
        }
    }
}
