/*
Xay dung chuong trinh quan li ban hangcua 1 cua hang may tinh
Moi chiec laptop co cac thong so nhu sau
-Ten hang san xuat :toi da 20 ki tu
-Dung luong RAM: so nguyen chia het cho 4
-Chip: "i3", "i5", "i7", "M1", "m2"
-Gia ban(VND): so thuc duong
-Ma san pham: khong qua 30 ki tu
1/ Viet ham nhap thong tin cho n chiec laptop
-Doi voi thong tin chip:cho ng dung nhap 1 so nguyen neu nhap vao 3 thi khoi tao "i3", 5-"i5", 7-"i7"; 1 thi khoi tao M1, 2-"M2"
-Truong thong tin nao sai dinh dang thi yeu cau nhap lai den khi dung thi thoi.

2/Viet ham khoi tao ma san pham cho n chiec laptop.
Biet rang: ma san pham co dang ten hang san xuat-dung lượng RAM-chip(VD: Asus-4G-i5; MacbookairM1-8G-M1

3/viet ham sap xep n chiec laptop 
4/Viet ham in ra danh sach n chiec laptop theo gia ban tang dan
5/viet ham in ra danh sach nhung chiec laptop co chip i7, RAM > 8G
*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

typedef struct{
    char brand[21];
    int ram;
    char chip[3];
    double price;
    char id[31];
}laptop;

int check_brand(char *a){
    if(strlen(a) > 20) return 0;
    else{
        int i;
        for(i = 0; i < strlen(a); i++){
            if(isspace(a[i]) != 0) return 0;
        }
    }
    return 1;
}

char* get_ram(int i){
    switch (i)
    {
    case 1: return "M1";
    case 2: return "M2";
    case 3: return "i3";
    case 5: return "i5";
    case 7: return "i7";
    default: return "";
    }
}

void input(laptop l[], int n){
    int i;
    for(i = 0; i < n; i++){
        pritnf("Nhap hang: ");
        fflush(stdin);
        gets(l[i].brand);
        while(check_brand(l[i].brand) == 0){
            pritnf("Nhap hang: ");
            fflush(stdin);
            gets(l[i].brand);
        }
        printf("Nhap RAM: ");
        scanf("%d", &l[i].ram);
        while (l[i].ram <= 0 || l[i].ram % 4 != 0){
            printf("Nhap RAM: ");
            scanf("%d", &l[i].ram);
        }
        printf("Chon chip:\n ");
        printf("1 - M1\n2 - M2\n3 - i3\n5 - i5\n7 - i7\n");
        printf("Lua chon cua ban: ");
        int c;
        scanf("%d", &c);
        while (strlen(get_ram(c)) == 0){
            printf("Hay chon lai: ");
            scanf("%d", &c);
        }
        strcpy(l[i].chip, get_ram(c));
        printf("Nhap gia: ");
        scanf("%lf", &l[i].price);
        while (l[i].price <= 0){
            printf("Nhap gia: ");
            scanf("%lf", &l[i].price);
    }
}
}

void create_id(laptop l[], int n){
    int i;
    for(i = 0; i < n; i++){
        strcat(l[i].id, l[i].brand);
        strcat(l[i].id, "-");
        char c[3];
        itoa(l[i].ram, c, 10);
        strcat(l[i].id, c);
        strcat(l[i].id, "-");   
        strcat(l[i].id, l[i].chip); 
        }
}

void display(laptop l[], int n){
    printf("|%3s|%-20s|%3s|%4s|%-30s|%5s|\n", "STT", "Hang", "RAM", "Chip", "Ma san pham", "gia");
    int i;
    for(i = 0; i < n; i++){
        printf("|%3d|%-20s|%3d|%4s|%-30s|%5.2lf|\n", i+1,l[i].brand,l[i].ram,l[i].chip,l[i].id,l[i].price);
    }
}

void sort_price(laptop l[], int n){
    int i,j;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(l[j].price > l[j+1].price){
                laptop c = l[j];
                l[j] = l[j+1];
                l[j+1];
            }
        }
    }
}

void search(laptop l[], int n){
    printf("|%3s|%-20s|%3s|%4s|%-30s|%5s|\n", "STT", "Hang", "RAM", "Chip", "Ma san pham", "gia");
    int i, count = 1;
    for(i = 0; i < n; i++){
        if(l[i].ram > 8 && strcmp(l[i].chip, "i7") == 0){
            printf("|%3d|%-20s|%3d|%4s|%-30s|%5.2lf|\n",count,l[i].brand,l[i].ram,l[i].chip,l[i].id,l[i].price);
            count++;
        }
    }
}

int main(){
    laptop l[100];
    input(l, 3);
    create_id(l, 3);
    display(l, 3);
    sort_price(l, 3);
    di
}