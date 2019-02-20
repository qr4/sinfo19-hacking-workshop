#include <stdio.h>
#include <stdlib.h>

void spawn_shell() {
  system("/bin/sh");
}

int main() {
  int number = 0;
  char buf[16];

  // Don't ask :D this will be needed later
  printf("Address of system is: %p\n", system);

  printf("Please provide your input:\n");
  gets(buf);

  if (number == 42) {
    printf("You win!");
    spawn_shell();
  } else {
    printf("Sorry, %d != %d. Try again.\n", number, 42);
  }

  return 0;
}
