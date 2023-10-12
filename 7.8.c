// tim so chia het cho 3 tu 100-1000
#include<stdio.h>
int main() {
    for(int i =100; i < 1000; i++){
        int don_vi, chuc, tram;
        int dem_so_luong_da_in = 0;

        don_vi = i % 10;
        chuc = (i/10) %10;
        tram = i / 100;
        if(don_vi + tram == chuc && i % 3 == 0){
            printf("%d ", i);
            dem_so_luong_da_in++;
        }
        if(dem_so_luong_da_in % 10 == 0) {}
    printf("\n"); 
    }
}