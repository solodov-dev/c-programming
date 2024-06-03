#include <stdio.h>
#include <string.h>

#define MAX_INPUT 20

int main(void) {
  char ch;
  char input[MAX_INPUT];
  char longest_string[MAX_INPUT];
  char shortest_string[MAX_INPUT];

  do {
    printf("Enter a word: ");

    int i = 0;

    while ((ch = getchar()) != '\n') {
      if (i < MAX_INPUT)
        input[i++] = ch;
    }

    input[i] = '\0';

    if (strlen(shortest_string) == 0 ||
        strlen(shortest_string) > strlen(input)) {
      strcpy(shortest_string, input);
    } else if (strlen(longest_string) == 0 ||
               strlen(longest_string) < strlen(input)) {
      strcpy(longest_string, input);
    }
  } while (strlen(input) != 4);

  printf("\nShortest string is: %s\n", shortest_string);
  printf("Longest string is: %s\n", longest_string);
}
