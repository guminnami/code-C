// #include<stdio.h>
// int main() {
//     char title[20], isbn[10];
//     int price;
//     int quantity;
//     int total;
//     printf("Quan bo: ");
//     scanf("%20s", title);
//     printf("Gia: ");
//     scanf("%d", &price);
//     printf("So luong: ");
//     scanf("%d", &quantity);
//     printf("- ISBN: ");
//     scanf("%20s", isbn);
//     total = quantity * price;
//     printf("BK Bookseller\n");
//     printf("%3s%6s%22s%10s%10s\n","Qty","ISBN","Title","Price","Total");
//     printf("_________________________________________________________\n");
//     printf("%3d%6s%22s%10d%10d\n",quantity,isbn,title,price,total);
//     printf("\nVAT: %d\n", total * 5/100);
//     printf("You pay: %d\n", total * 105/100);
//     return 0;
// }
#include<stdio.h>
int main(){
    char title[20], isbn[10];
    int price;
    int quantity;
    int total;
    printf("quan jean: ");
    scanf("%20s", title);
    printf("gia: ");
    scanf("%d", &price);
    printf("so luong: ");
    scanf("%d", &quantity);
    printf("- isbn: ");
    scanf("%10s", isbn);
    total = quantity * price;
    printf("BK Book Seller\n");
    printf("%5s%8s%20s%10s%10s\n", "Qty", "ISBN", "Title", "Price", "Total");
    printf("______________________________________________________________\n");
    printf("%5d%8s%20s%10d%10d\n", quantity, isbn, title, price, total);
    printf("\nVAT: %d\n", total * 5/100);
    printf("You pay: %d\n", total * 105/100);
    return 0;
}