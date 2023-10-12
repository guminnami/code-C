#include<stdio.h>
double tinh_e(double eps){
     double e = 1;
     int n = 1, gt = 1;
     while((double) 1/gt >= eps) {
        gt *= n;
        e += (double) 1/gt;
        n++;
    }   
    printf("e = %.10lf, n = %d", e, n);
}
double tinh_pi(double eps){
    double pi = 1;
    int i = 1;
    while((double) 1/(2*i+1) >= eps){
        pi += (double) pow(-1,i)/(2*i+1);
        i++;
    }
    printf("pi = %.10lf, n = %d", pi, n);
    return pi;
}
double tinh_sin(double x, double eps){
    double sinx = x;
    int n = 1, gt = 1;
    while(double) pow(x, 2*n+1) / gt >= eps){
        gt *= (2*n) * (2*n+1);
        sinx *= pow(-1, n) * (double) pow(x, 2*n+1) /gt;
        n++;
    }
    printf("sin(%.2lf) = %.10lf, n = %d", x, sinx, n);
    
    }
double nhap_eps(){
    double eps;
    printf("Enter epsilon: ");
    scanf("%lf", &eps);
    while(eps <= 0 || eps >= 1){
        printf("Re-enter: ");
        scanf("%lf", &eps);
    }
    return eps;
}

int main(){
    char c;
    double eps;
    do{
        printf("Tinh e: 1\n");
        printf("Tinh pi: 2\n");
        printf("Tinh sin: 3\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &i);
        switch(i){
            case 1:
                eps = nhap_eps();
                tinh_e(eps);
                break;
            case 2:
                eps = nhap_eps();
                tinh_pi(eps);
                break;
            case 3:
                eps = nhap_eps();
                printf("Nhap goc x:");
                scanf("%lf", &x);
                tinh_sin(x, eps);
                break;
            default:
                printf("Nhap sai, Nhap lai lua chon!");
                break;
        }
        printf("\nTiep tuc? (y/n) ");
        fflush(stdin);
        scanf("%c", &c);
    }while (c== 'v');

    {
        /* code */
    }
    

        }
        {
        case /* constant-expression */:
            /* code */
            break;
        
        default:
            break;
        }
}