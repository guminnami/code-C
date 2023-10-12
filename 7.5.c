#include<stdio.h>
int main() {
    int ga, cho;
    for (ga = 0; ga <= 36; ga++){
        cho = 36 - ga;
        if(2*ga + 4*cho == 100) break;

    }
    printf("Ga: %d, Cho: %d", ga, cho);
}