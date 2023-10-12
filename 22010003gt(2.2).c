
//bai1
#include <stdio.h>
#define SIZE 5
int ex4Search(){
int i;
printf("\nDUYET MANG: TIM KIEM GIA TRI\n");
char myChar[SIZE] = {'b', 'a', 'c', 'k', 's'};
char searchChar;
printf("Nhap vao ki tu can tim kiem: ");
scanf("%c", &searchChar);
for (i = 0; i < SIZE; i++) {
if (myChar[i] == searchChar) {
printf("Tim thay ki tu %c tai vi tri %d\n", myChar[i], i);
break;
}
}
return 0;
}
//bai2
int ex5FindMax1() {
int index, max, numArray[10];
max = -1;
printf("\nDUYET MANG: TIM GIA TRI LON NHAT\n");
printf("Nhap 10 gia tri so vao mang numArray:\n");
for (index = 0; index < 10; index++) {
scanf("%d", &numArray[index]);
}
for (index = 0; index < 10; index++) {
if (numArray[index] > max) {
max = numArray[index];
}
}
printf("Gia tri lon nhat la %d.\n", max);
return 0;
}

//bai3
int ex5FindMax2() {
int i;
printf("\nDUYET MANG: TIM GIA TRI LON NHAT\n");
int index, imax, numArray[10];
imax = 0;
printf("Nhap 10 gia tri so vao mang numArray:\n");
for (index = 0; index < 10; index++) {
scanf("%d", &numArray[index]);
}
for (index = 1; index < 10; index++) {
if (numArray[index] > numArray[imax]) {
imax = index;
}
}
printf("Gia tri lon nhat la %d.\n", numArray[imax]);
return 0;
}