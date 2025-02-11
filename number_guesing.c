#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int num_length = sizeof(num) / sizeof(num[0]);
  int guess_number;
  int chance = 1;
  srand(time(NULL));

  int random_indeks = rand() % num_length;
  int random_number = num[random_indeks];

  

  while(chance < 4){
    printf("You only have %d chance", chance);
    printf("Guess The Number = ");
    scanf("%d", &guess_number);

    if(guess_number == random_number){
      printf("YOU ARE CORRECT!");
      chance = 3;
      break;
    }
    else if(guess_number > random_number){
      printf("smaller...");
    }
    else if(guess_number < random_number){
      printf("BIGGER!!!");
    }
    chance++;
  }
  return 0;
}