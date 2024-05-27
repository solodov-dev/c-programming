#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
  int wins = 0, losses = 0;
  char again = 'y';

  srand((unsigned)time(NULL));

  while (again == 'y') {
    if (play_game()) {
      printf("You win!\n");
      wins++;
    } else {
      printf("You lose!\n");
      losses++;
    }

    printf("\nPlay again? ");
    scanf(" %c", &again);
  }

  printf("Wins: %d\tLosses:%d\n", wins, losses);
}

int roll_dice(void) {
  int roll;

  roll = ((rand() % 6 + 1) + (rand() % 6 + 1));
  printf("You rolled: %d\n", roll);

  return roll;
}

bool play_game(void) {
  int roll, point;

  roll = roll_dice();

  if (roll == 7 || roll == 11)
    return true;
  if (roll == 2 || roll == 3 || roll == 12)
    return false;

  point = roll;
  printf("Your point is %d\n", point);

  while (1) {
    roll = roll_dice();
    if (roll == 7)
      return false;
    if (roll == point)
      return true;
  }
}
