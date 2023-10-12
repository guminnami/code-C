//t 
#include<stdio.h>
int main(){
    int s[10];
    int N;
    do{
    printf("nhap vao N (N <= 10): ");
    scanf("%d", &N);
    }while (N > 10);
    printf("Nhap vao N so tu nhien: \n");
      for (int i = 0; i < N; i++){
        printf("s[%d] = ", i);
      scanf("%d", &s[i]);
    }  
    
    for (int i = 0; i < N; i++){
        printf("%d ", s[i]);
    }
}


