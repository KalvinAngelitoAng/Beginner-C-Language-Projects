#include <stdio.h>
#include <stdlib.h>

int main(){
  double a, b;
  int input;

  while(1){
    system("cls");
    printf("==============================\n");
    printf("   Welcome To Calculator\n");
    printf("==============================\n");
    printf("Menu :\n");
    printf("1. Addition\n");
    printf("2. Substraction\n");
    printf("3. Multiplication\n");
    printf("4. Divison\n");
    printf("0. Exit\n");
    printf("==============================\n");
    printf("Insert your option ="); scanf("%d", &input); getchar();
    
    switch(input){
      case 1:
        system("cls");
        printf("==============================\n");
        printf("          Addition\n");
        printf("==============================\n");
        printf("Input two number : ");
        scanf("%lf %lf", &a, &b);
        printf("Press Enter to continue...");
        while(getchar() != '\n');
        getchar();
        system("cls");
        printf("==============================\n");
        printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
        printf("==============================\n");
        printf("Press Enter to go back to the Menu...");
        getchar();
        break;
      case 2:
        system("cls");
        printf("==============================\n");
        printf("        Substraction\n");
        printf("==============================\n");
        printf("Input two number : ");
        scanf("%lf %lf", &a, &b);
        printf("Press Enter to continue...");
        while(getchar() != '\n');
        getchar();
        system("cls");
        printf("==============================\n");
        printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
        printf("==============================\n");
        printf("Press Enter to go back to the Menu...");
        getchar();
        break;
      case 3:
        system("cls");
        printf("==============================\n");
        printf("       Multiplication\n");
        printf("==============================\n");
        printf("Input two number : ");
        scanf("%lf %lf", &a, &b);
        printf("Press Enter to continue...");
        while(getchar() != '\n');
        getchar();
        system("cls");
        printf("==============================\n");
        printf("%.2lf + %.2lf = %.2lf\n", a, b, a * b);
        printf("==============================\n");
        printf("Press Enter to go back to the Menu...");
        getchar();
        break;
      case 4:
        system("cls");
        printf("==============================\n");
        printf("          Divison\n");
        printf("==============================\n");
        printf("Input two number : ");
        scanf("%lf %lf", &a, &b);
        printf("Press Enter to continue...");
        while(getchar() != '\n');
        getchar();
        system("cls");
        if(a == 0 && b == 0){
          printf("Division using a = 0 and b = 0 result in undefined\n");
        }
        else if( b == 0){
          printf("Division using b = 0 result in undefined\n");
        }
        else{
          printf("%.2lf + %.2lf = %.2lf\n", a, b, a / b);
          }
        printf("==============================\n");
        printf("Press Enter to go back to the Menu...\n");
        printf("==============================\n");
        getchar();
        break;
      case 0:
      system("cls");
      printf("==============================\n");
      printf("Exiting the program...\n");
      printf("==============================\n");
      printf("Press Enter to continue...\n");
      printf("==============================\n");
      getchar();
      system("cls");
      return 0;
      break;
      }
    }
  }