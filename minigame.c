#include <stdio.h>
#include <stdlib.h>

void startText() {
  system("clear");
  printf("Welcome to the Terminal Adventure Game!\n");
  system("sleep 3");
  system("clear");
  printf("You find yourself in a dark cave. There are three paths ahead. \n");
}

void startRoom() {
  system("clear");
  printf("Choose path: \n");

  printf("[1] Wooden Door\n");
  printf("[2] Dark Path On Right\n");
  printf("[3] Deeper Into Cave\n");
  printf("[4] Exit Game\n");
}

void backToStart() {
  startRoom();
  int option;
  printf("Enter your choice: ");
  scanf("%d", &option);

  // Walk into door
  if (option == 1) {
    system("clear");
    printf("You Open the door...\n");
    system("sleep 2");
    printf("You see see an empty box and nothing else\n");
    printf("[1] Leave Room\n");
    printf("[2] End Game\n");
    scanf("%d", &option);
    if (option == 1) {
      backToStart();
    } else if (option == 2) {
      exit(0);
    } else {
      printf("Not a valid option.\n");
      exit(0);
    }
  }

// enter dark path
if (option == 2) {
  system("clear");
  printf("You walk but don't see anything.\n");
  printf("Do you want to keep walking?\n");
  printf("[1] keep walking [2] Go Back [3] Exit Game\n");
  int walkMore;
  scanf("%d", &walkMore);
  if (walkMore == 1) {
    system("clear");
    printf("You see the tunnel leads upward.\n");
    printf("You see light! Do you want to escape?\n");
    int escape;
    printf("[1] Escape [2] Go back [3] Exit Game\n");
    scanf("%d", &escape);
    if (escape == 1) {
      printf("You escaped, you won!\n");
      // Don't proceed to the else block, instead return from the function
      return;
    } else if (escape == 2) {
      // Provide an option to go back to the starting room
      backToStart();
    } else if (escape == 3) {
      exit(0);
    } else {
      printf("Not a valid option.\n");
      exit(0);
    }
  } else if (walkMore == 2) {
    // Go back to the starting room
    backToStart();
  } else {
    printf("Not a valid option.\n");
    exit(0);
  }
}


  // deeper into cave
  if (option == 3) {
    system("clear");
    printf("You start to cough.\n");
    printf("Do you want to go in deeper or back\n");
    printf("[1] deeper [2] back [3] exit game\n");
    int caveExplore;
    scanf("%d", &caveExplore);
    if (caveExplore == 1) {
      // deeper
      printf("You start to have trouble breathing and faint.\n");
      exit(0);
    } else if (caveExplore == 2) {
      backToStart();
    } else if (caveExplore == 3) {
      exit(0);
    } else {
      printf("Not a valid option.\n");
      exit(0);
    }
  }

  // exit game
  if (option == 4) {
    exit(0);
  } else {
    printf("Not a valid option.\n");
    exit(0);
  }
}

int main() {
  startText();
  backToStart();

  return 0;
}
