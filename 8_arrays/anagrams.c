#include <ctype.h>
#include <stdio.h>

#define ALPHABET_LENGTH 26

int main(void) {
  char chars[ALPHABET_LENGTH] = {0};
  char ch;

  printf("Enter first word: ");

  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      chars[tolower(ch) - 'a']++;
    }
  }

  printf("Enter second word: ");

  while ((ch = getchar()) != '\n') {
    if (isalpha(ch)) {
      chars[tolower(ch) - 'a']--;
    }
  }

  for (int i = 0; i < ALPHABET_LENGTH; i++) {
    if (chars[i] != 0) {
      printf("The words are not anagrams\n");
      return 0;
    }
  }

  printf("The words are anagrams\n");
}
