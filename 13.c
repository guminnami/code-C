//13.2
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
int dem_space(char *s){
    int count = 0;
    int i;
    for(int i = 0; i < strlen(s); i++){
        if(isspace(s[i]) != 0){
            count++;
        }
    }
    return count;
}
void xoa_space(char *s){
    int i;
    for(i = 0; i < strlen(s) - 1; i++){
        while(isspace(s[i]) != 0 && isspace(s[i+1]) != 0){
            int j = i;
            for(j = i; j < strlen(s) - 1; j++){
                s[j] = s[j + 1];
            }
            s[i] = s[i + 1];
        }
        s[strlen(s) - 1] = '\0';
    }
}
int main(){
    char s[20];
    printf("Enter string: ");
    gets(s);
    while (strlen(s) >  20){
    printf("Re-enter string: ");
    fflush(stdin);
    gets(s);
    }
    xoa_space(s);
    printf("%s", s);
    
}
