//tao mang quan li luong mua trong nam
#include<stdio.h>
double luong_mua[12];
void input(){
    for (int i = 0; i < 12; i++){
    printf("Thang &d: ", i + 1);
    scanf("%lf", &luong_mua[i]);
}
}
void output(){
    printf("%8s%20s", "Thang", "Luong mua (in mm)");
    for (int i = 0; i < 12; i++){
    printf("\n%8d20lf: ", i + 1, luong_mua[i]);
    scanf("%lf", &luong_mua[i]);
}
}

int main(){
    input();
    output();

}