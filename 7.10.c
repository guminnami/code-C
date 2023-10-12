
#include<stdio.h>
#include<math.h>
int main() {
    int n;
    printf("Enter n: );
    scanf("%d", &n);
    if(0 >= n){
        printf("Invalid input. Exit!");
   }
   else{
    double S = 0;
    for(int i = 1; i <= n; i++){
        S += (double) 1/i;
    }
    printf("S = %.2lf\n", S);
   }
}