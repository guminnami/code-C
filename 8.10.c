#include <stdio.h>
#include <math.h>

int main() {
   char choice;
   double x;

   do {
      printf("CHUONG TRINH TINH\n");
      printf("1- So pi\n");
      printf("2- So e\n");
      printf("3- sin(x)\n");
      printf("An phim khac: Thoat\n");
      printf("Moi ban lua chon chuong trinh: ");
      scanf(" %c", &choice);

      switch (choice) {
         case '1':
            printf("Ban da chon chuong trinh 1\n");
            printf("So pi = %.2f\n", M_PI);
            break;
         case '2':
            printf("Ban da chon chuong trinh 2\n");
            printf("So e = %.2f\n", M_E);
            break;
         case '3':
            printf("Ban da chon chuong trinh 3\n");
            printf("Nhap x: ");
            scanf("%lf", &x);
            printf("sin(%.2f) = %.2f\n", x, sin(x));
            break;
         default:
            printf("Thoat chuong trinh!\n");
            return 0;
      }

      printf("Ban co muon tiep tuc chuong trinh?(y/n): ");
      scanf(" %c", &choice);
   } while (choice == 'y' || choice == 'Y');

   return 0;
}
