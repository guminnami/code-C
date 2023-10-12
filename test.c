// #include <stdio.h>

// int main(){
//     int a, b;
//     char c;
//     scanf("%d%d%c", &a, &b, &c);
//     switch (c)
//     {
//     case '+':
//         printf("%d", a+b);
//         break;
//     case '-':
//         printf("%d", a-b);
//         break;
//     case '*':
//         printf("%d", a*b);
//         break;
//     case '/':
//         printf("%d", a/b);
//         break;
//     }
//     return 0;
// }


//tinh tong so dau va so cuoi trong mang

// int main() {
//    int n;
//    scanf("%d", &n);
//    int a[n];
//    for (int i=0;i<n;i++){
//     scanf("%d", &a[i]);
//    }
//    printf("%d", a[0]+a[n-1]);
//    return 0;
// }

//in cac so chan trong 1 mang

// int main() {
//     int n;
//     scanf("%d", &n);
//     int a[1000];
//     for(int i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }
//     for(int i =0;i<n;i++){
//         if(a[i] % 2 ==0){
//             printf("%d", a[i]);
//         }
//     }
//     return 0;
// }

//cho mang va so nguyen k dc nhap tu ban phim.tim so phan tu bang k

// int main(){
//     int n, k;
//     int a[1000];
//     scanf("%d ", &n);
//     for(int i=0;i<n;i++){
//         scanf("%d", &a[i]);
//     }
//     scanf("%d", &k);
  
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(k == a[i]){
//             count++;
//         }
//     }
//     printf("%d", count);
// }
// int main() {
//     int n, k;
//     int arr[1000];
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &k);

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == k) {
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }


#include<stdio.h>
#include<string.h>

typedef struct{
	char name[21];
	char id[7];
	double price;
	int quantity;
}product;

product input(){
	product p;
	printf("Ma mat hang: ");
	fflush(stdin);
	scanf("%6s", p.id);
	printf("Gia mat hang: ");
	scanf("%lf", &p.price);
	while(p.price <= 0){
		printf("Nhap lai gia mat hang: ");
		scanf("%lf", &p.price);
	}
	printf("So luong mat hang: ");
	scanf("%d", &p.quantity);
	while(p.quantity <= 0){
		printf("Nhap lai so luong mat hang: ");
		scanf("%d", &p.quantity);
	}
	return p;
}

void input_list(product p[], int *n){
	*n = 0;
	do{
		char ten[21];
		printf("Ten mat hang: ");
		fflush(stdin);
		gets(ten);
		if(strcmp(ten,"***") == 0) break;
		else{
			while(strlen(ten) > 20){
				printf("Nhap lai ten mat hang: ");
				gets(ten);
			}
			p[*n] = input();
			strcpy(p[*n].name, ten);
			*n = *n + 1;
		}
	}while(1);
}

void output(product p[], int n){
	printf("+---+-------+--------------------+----------+--------+-----------+\n");
	printf("|%3s|%7s|%20s|%10s|%8s|%11s|\n","STT","Ma hang","Ten hang hoa","Don gia","So luong","Tong tien");
	int i;
	for(i = 0; i < n; i++){
		printf("+---+-------+--------------------+----------+--------+-----------+\n");
		printf("|%3d|%7s|%20s|%10.2lf|%8d|%11.2lf|\n", i+1, p[i].id, p[i].name, p[i].price, p[i].quantity, p[i].price*p[i].quantity);
	}
	printf("------------------------------------------------------------------\n");
}

void sort_id(product p[], int n){
	int i;
	for(i = 0; i < n - 1; i++){
		int j;
		for(j = 0; j < n - i - 1; j++){
			if(strcmp(p[j].id, p[j+1].id) > 0){
				product temp;
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}

void output_price(product p[], int n){
	printf("+---+-------+--------------------+----------+--------+-----------+\n");
	printf("|%3s|%7s|%20s|%10s|%8s|%11s|\n","STT","Ma hang","Ten hang hoa","Don gia","So luong","Tong tien");
	int i;
	for(i = 0; i < n; i++){
		if(p[i].price * p[i].quantity > 500000){
			printf("+---+-------+--------------------+----------+--------+-----------+\n");
			printf("|%3d|%7s|%20s|%10.2lf|%8d|%11.2lf|\n", i+1, p[i].id, p[i].name, p[i].price, p[i].quantity, p[i].price*p[i].quantity);
		}
	}
	printf("------------------------------------------------------------------\n");
}

int main(){
	int n;
	product p[1000];
	input_list(p, &n);
	output(p, n);
	sort_id(p, n);
	output(p, n);
	output_price(p, n);
}
