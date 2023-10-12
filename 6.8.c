// danh gia hoc luc cua sinh vien
#include<stdio.h>
int main() {
    float diem;
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);
    if(0 <= diem && diem <= 10){
        if(diem < 5){
            printf("Hoc luc kem.");
        } 
        else {
            if(diem < 7)
                printf("Hoc luc trung binh.");
        
            else {
                if(diem < 8) printf("Hoc luc kha.");
                else {
                    if(diem < 9) printf("Hoc luc gioi.");
                    else { printf("Hoc luc xuat sac.");
            }
        }
    }
} 
    }
else{
        printf("Diem cua nhap khong hop le!");
    }
}