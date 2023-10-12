#include<stdio.h>
#include<string.h>
#include<math.h>

char s1[1000], c, s[1000], s2[1000], s3[1000];
int cnt = 0, t = 0;

void Nhap() {
    printf("Nhap xau thu nhat: ");
    scanf("%s", &s1);
    printf("Nhap xau thu hai: ");
    scanf("%s", &s2);
    getchar();
    printf("Nhap ki tu muon xoa: ");
    scanf("%s", &s);
    scanf("%c", &c);
}

void p1(){

    for (int i = 0; i < strlen(s1); i++) {
        s[i] = s1[i];
    }

    for (int i = 0; i < strlen(s1); i++) {
        for (int j = 0; j < strlen(s2); j++) {
            if (s1[i] == s2[j]) cnt++;
        }
        if (cnt == strlen(s2)) {
            for (int k = i - strlen(s2) + 1; k <= i; k++) {
                s1[k] = '-';
            }
            cnt = 0;
        }
    }

}

void p2() {

    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] != c) {
            s3[t++] = s1[i];
        }
    }
}

void In() {
    printf("Xau thu nhat: %s\n", s);
    printf("Xau thu hai: %s\n", s2);
    printf("Ket qua cau 1/: %s\n", s1);
    printf("Ket qua cau 2/: %s\n", s3);
}

int main(){

    Nhap();
    p1();
    p2();
    In();
}