#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num_length = sizeof(num) / sizeof(num[0]);
  int guess_number;
  int max_chance = 5;
  char repeat;
  char buffer;

  printf("WELCOME TO THE GUESS THE NUMBER!!!\n");
  printf("==============================\n");
  printf("You will have to guess a number between 1-10\n");
  printf("==============================\n");
  printf("\nPress Enter to start the game");
  getchar();

  do{
    srand(time(NULL));
    int random_indeks = rand() % num_length;
    int random_number = num[random_indeks];
    int chance = 0;

      while(chance < max_chance){
        system("cls");
        printf("You have %d chances left\n", max_chance - chance);
        printf("==============================\n");
        printf("Guess The Number = ");
        scanf("%d", &guess_number); getchar();
        chance++;

        if(guess_number == random_number){
          break;
        }
        else if(guess_number > random_number){
          printf("smaller...");
        }
        else if(guess_number < random_number){
          printf("BIGGER!!!");
        }

        printf("\n\nPress Enter to continue");
        getchar();
      }

      if(guess_number != random_number){
        system("cls");
        printf("You Lose... The right number is = %d\n", random_number);
        printf("Try again? (Y/n)");
      }
      else if(guess_number == random_number){
        system("cls");
        printf("You Win!!! The right number is = %d\n", random_number);
        printf("Try Again? (Y/n)");
      }
      
      do{
        scanf(" %c", &repeat);
        if(repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n'){
          printf("Invalid input. Please press 'Y' to try again or 'n' to quit\n");
        }
      }while(repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n');
      
    }while(repeat == 'y' || repeat =='Y');
  
  system("cls");
  printf("==============================\n");
  printf("    Thank You For Playing     \n");
  printf("==============================\n");

  return 0;
}