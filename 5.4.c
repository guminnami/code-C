// #include<stdio.h>
// int main() {
//     //tinh so tien dien phai tra khi dung
//     int so_dien, gia;
//     printf("So dien tieu thu trong thang la: ");
//     scanf("%d", &so_dien);
//     gia = (so_dien <= 50) ? so_dien*500 : gia;
//     gia = (so_dien >= 51 && so_dien <= 100) ? 50*500+(so_dien-50)*1000 : gia;
//     gia = (so_dien >= 101 && so_dien <= 150) ? 50*500+50*1000+(so_dien-100)*1200 : gia;
//     gia = (so_dien >= 151) ? 50*500+50*1000+50*1200+(so_dien-150)*1600 : gia;
//     printf("So tien phai tra: %d", gia);

// }
#include<stdio.h>
int main() {
    //tinh so tien dien phai tra khi dung
    int so_dien, gia;
    printf("So dien tieu thu trong thang la: ");
    scanf("%d", &so_dien);
    gia = (so_dien <= 50) ? so_dien*500 : gia;
    gia = (so_dien >= 51 && so_dien <= 100) ? so_dien*1000 : gia;
    gia = (so_dien >= 101 && so_dien <= 150) ? so_dien*1200 : gia;
    gia = (so_dien >= 151) ? so_dien*1600 : gia;
    printf("So tien phai tra: %d", gia);

}
