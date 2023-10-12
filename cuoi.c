// #include <string.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>

// int Ch(char* a) {
//   int i; for (i = 0; i < strlen(a);i++) if (!isdigit(a[i]))return 0;
//   return 1;
// }
// char* _1() {
//   char a[101];
//   do { printf("Nhap a: "); fflush(stdin);  gets(a); } while (strlen(a) > 100 || !Ch(a));
//   int i = strlen(a) + 1;
//   return memcpy(malloc(i), a, i);

// }
// void _2(char* x) {
//   int* c = calloc(256, sizeof(int)), i, j;
//   for (i = 0; i < strlen(x);i++) c[(int)x[i]]++;
//   for (i = j = 0; i < 256;i++) if (c[j] < c[i]) j = i;
//   printf("%c lap lai %d lan", j, c[j]);
//   free(x);
// }
// int main() {
//   _2(_1());
// }



// #include <string.h>
// #include <ctype.h>
// #include <stdlib.h>
// #include <stdio.h>

// #define gs fflush(stdin);gets
// #define _p printf
// #define _m malloc 
// int check(char* s) {
//   if (strlen(s) > 6 || toupper(s[0]) != 'P') return 1;
//   int i, a, b;
//   for (i = a = b = 0; i < strlen(s);i++) {
//     char x = s[i];
//     if (isupper(x)) a = 1;
//     if (isdigit(x)) b = 1;
//     if (a && b) return 0;
//   }
//   return 1;
// }
// char* _1() {
//   char* a = _m(7);
//   int i = 0;
//   _p("Nhap 1 xau co 6 ki tu, it nhat mot chu hoa, mot chu so.\nBat dau bang 'P' hoac 'p'.");
//   _p("Nhap xau: ");
//   do {
//     if (i++) printf("Ko hop le! Nhap lai: ");
//     gs(a);
//   } while (check(a));
//   return a;
// }
// void _2(char* s) {
//   int i, a, b;
//   for (i = a = b = 0; i < strlen(s);i++) {
//     if (isdigit(s[i])) a++;
//     if (isalpha(s[i])) b++;
//   }
//   printf("Co %d so va %d chu.\n", a, b);
// }

// void _3(char* s) {
//   int i, j;for (i = j = 0; i < strlen(s);i++) {
//     if (!isalnum(s[i])) continue;
//     s[j++] = s[i];
//   }
//   s[j] = '\0';
// }
// int main() {
//   char* a = _1();
//   _2(a); _3(a);
//   _p(a);
// }




// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// #include<stdlib.h>

// typedef struct{
// 	char brand[21];
// 	int ram;
// 	char chip[3];
// 	double price;
// 	char id[31];
// }laptop;

// int check_brand(char *a){
// 	if(strlen(a) > 20) return 0;
// 	else{
// 		int i;
// 		for(i = 0; i < strlen(a); i++){
// 			if(isspace(a[i]) != 0) return 0; 
// 		}
// 	}
// 	return 1;
// }

// char* get_ram(int i){
// 	switch(i){
// 		case 1: return "M1";
// 		case 2: return "M2";
// 		case 3: return "i3";
// 		case 5: return "i5";
// 		case 7: return "i7";
// 		default: return "";
// 	}
// }

// void input(laptop l[], int n){
// 	int i;
// 	for(i = 0; i < n; i++){
// 		printf("Nhap hang: ");
// 		fflush(stdin);
// 		gets(l[i].brand);
// 		while(check_brand(l[i].brand) == 0){
// 			printf("Nhap lai hang: ");
// 			fflush(stdin);
// 			gets(l[i].brand);
// 		}
// 		printf("Nhap RAM: ");
// 		scanf("%d", &l[i].ram);
// 		while(l[i].ram <= 0 || l[i].ram % 4 != 0){
// 			printf("Nhap lai RAM: ");
// 			scanf("%d", &l[i].ram);
// 		}
// 		printf("Chon chip:\n");
// 		printf("1 - M1\n2 - M2\n3 - i3\n5 - i5\n7 - i7\n");
// 		printf("Lua chon cua ban: ");
// 		int c;
// 		scanf("%d", &c);
// 		while(strlen(get_ram(c)) == 0){
// 			printf("Hay chon lai: ");
// 			scanf("%d", &c);
// 		}
// 		strcpy(l[i].chip, get_ram(c));
// 		printf("Nhap gia: ");
// 		scanf("%lf", &l[i].price);
// 		while(l[i].price <= 0){
// 			printf("Nhap lai gia: ");
// 			scanf("%lf", &l[i].price);
// 		}
// 	}
// }

// void create_id(laptop l[], int n){
// 	int i;
// 	for(i = 0; i < n; i++){
// 		l[i].id[0] = '\0';
// 		strcat(l[i].id, l[i].brand);
// 		strcat(l[i].id, "-");
// 		char c[3];
// 		itoa(l[i].ram, c, 10);
// 		strcat(l[i].id, c);
// 		strcat(l[i].id, "G-");
// 		strcat(l[i].id, l[i].chip);
// 	}
// }

// void display(laptop l[], int n){
// 	printf("|%3s|%-20s|%3s|%4s|%-30s|%5s|\n","STT","Hang","RAM","Chip","Ma san pham","Gia");
// 	int i;
// 	for(i = 0; i < n; i++){
// 		printf("|%3d|%-20s|%3d|%4s|%-30s|%5.2lf|\n",i+1,l[i].brand,l[i].ram,l[i].chip,l[i].id,l[i].price);
// 	}
// }

// void sort_price(laptop l[], int n){
// 	int i,j;
// 	for(i = 0; i < n - 1; i++){
// 		for(j = 0; j < n - i - 1; j++){
// 			if(l[j].price > l[j+1].price){
// 				laptop c = l[j];
// 				l[j] = l[j+1];
// 				l[j+1] = c;
// 			}
// 		}
// 	}
// }

// void search(laptop l[], int n){
// 	printf("|%3s|%-20s|%3s|%4s|%-30s|%5s|\n","STT","Hang","RAM","Chip","Ma san pham","Gia");
// 	int i, count = 1;
// 	for(i = 0; i < n; i++){
// 		if(l[i].ram > 8 && strcmp(l[i].chip, "i7") == 0){
// 			printf("|%3d|%-20s|%3d|%4s|%-30s|%5.2lf|\n",count,l[i].brand,l[i].ram,l[i].chip,l[i].id,l[i].price);
// 			count++;
// 		}
// 	}
// }

// int main(){
// 	laptop l[100];
// 	input(l, 3);
// 	create_id(l, 3);
// 	printf("\nDanh sach laptop\n");
// 	display(l, 3);
// 	sort_price(l, 3);
// 	printf("\nSap xep theo gia tang dan\n");
// 	display(l, 3);
// 	printf("\nTim kiem\n");
// 	search(l, 3);
// }
