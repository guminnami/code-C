//tao mang quan li luong mua trong nam
#include<stdio.h>
double luong_mua[12];
void input(){
    int i;
    for (int i = 0; i < 12; i++){
        printf("Thang %d: ", i + 1);
        scanf("%lf", &luong_mua[i]);
}
}
void output(){
    int i;
    printf("%8s%20s", "Thang", "Luong mua (in mm)");
    for (int i = 0; i < 12; i++){
    printf("\n%8d%20lf: ", i + 1, luong_mua[i]);
    scanf("%lf", &luong_mua[i]);
}
}
double luong_mua_tb(){
    double sum = 0;
    for (int i = 0; i < 12; i++){
        sum += luong_mua[i];
    }
    return sum/12;
}
void luong_mua_max(){
    double max = luong_mua[0];
    for(int i = 1; i < 12; i++);
    if (max < luong_mua[i]){
        max = luong_mua[i];  
    }
}
for(int i = 0; i < 12; i++){
    if(max == luong_mua[i]){
        printf("\nThang %d: %.3lf", i + 1, max);
    }
}
int main(){
    input();
    output();
    printf("\nLuong mua trung binh: %.3lf", luong_mua_tb());

}