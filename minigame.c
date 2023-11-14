#include <stdio.h>
#include <stdlib.h>

void startText(){
  system("clear");
  printf("Welcome to the Terminal Adventure Game!\n");
  system("sleep 3");
  system("clear");
  printf("You find your self in a dark cave. There are three paths ahead. \n");
}

void startRoom(){
  system("clear");
  printf("Choose path: \n");

  printf("[1]Wooden Door\n");
  printf("[2]Dark Path On Right\n");
  printf("[3]Deeper Into Cave\n");
  printf("[4]Exit Game\n");
}

void backToStart(){
  startRoom();
  int option;  
  switch (option){
      // Walk into door
      case 1:
        system("clear");
        printf("You Open the door...\n");
        system("sleep 2");
        printf("You see see a empty box and nothing else\n");
        printf("[1] Leave Room\n");
        printf("[2] End Game\n");
        scanf("%d", &option);
        switch (option){
          case 1:
            backToStart();
          case 2:
            exit(0);
          default:
            printf("Not a option.\n");
            exit(0);
        } 
      // enter dark path
      case 2:
        system("clear");
        printf("You walk but don't see anything.\n");
        printf("Do you want to keep walking?\n");
        printf("[1] keep walking [2] Exit Game\n");
        int walkMore;
        scanf("%d", &walkMore);
        switch (walkMore){
          case 1:
            system("clear");
            printf("You see the tunnel leads upward.\n");
            printf("You see light do you want to escape?\n");
            int escape;
            printf("[1]Escape 2[Go back] [3]Exit Game\n");
            switch (escape){
              case 1:
                printf("You escaped, you won!\n");
              case 2:
                backToStart();
              case 3:
                exit(0);
               default:
                printf("Not a option.\n");
                exit(0);

            }

        }
      // deeper into cave
      case 3:
        system("clear");
        printf("You start to cough.\n");
        printf("Do you want to go in deeper or back");
        printf("[1] deeper [2] back [3] exit game\n");
        int caveExplore;
        switch (caveExplore){
          // deeper
          case 1:
            system("clear");
            printf("You start to have trouble breath and faint.\n");
            exit(0);
          // Start Room
          case 2:
            backToStart();
          // exit game
          case 3:
            exit(0);
           default:
            printf("Not a option.\n");
            exit(0);
        }


      // exit game
      case 4:
        exit(0);
       default:
            printf("Not a option.\n");
            exit(0);

    } 
    
}

int main(){
  startText();
  int option;
  backToStart();
  scanf("%d", &option);
  
  switch (option){
      // Walk into door
      case 1:
        system("clear");
        printf("You Open the door...\n");
        system("sleep 2");
        printf("You see see a empty box and nothing else\n");
        printf("[1] Leave Room\n");
        printf("[2] End Game\n");
        scanf("%d", &option);
        switch (option){
          case 1:
            startRoom();
          case 2:
            exit(0);
          default:
            printf("Not a option.\n");
            exit(0);
        } 
      // enter dark path
      case 2:
        system("clear");
        printf("You walk but don't see anything.\n");
        printf("Do you want to keep walking?\n");
        printf("[1] keep walking [2] Exit Game\n");
        int walkMore;
        scanf("%d", &walkMore);
        switch (walkMore){
          case 1:
            system("clear");
            printf("You see the tunnel leads upward.\n");
            printf("You see light do you want to escape?\n");
            int escape;
            printf("[1]Escape 2[Go back] [3]Exit Game\n");
            switch (escape){
              case 1:
                printf("You escaped, you won!\n");
              case 2:
                backToStart();
              case 3:
                exit(0);
               default:
                printf("Not a option.\n");
                exit(0);

            }

        }
      // deeper into cave
      case 3:
        system("clear");
        printf("You start to cough.\n");
        printf("Do you want to go in deeper or back");
        printf("[1] deeper [2] back [3] exit game\n");
        int caveExplore;
        switch (caveExplore){
          // deeper
          case 1:
            system("clear");
            printf("You start to have trouble breath and faint.\n");
            exit(0);
          // Start Room
          case 2:
            backToStart();
          // exit game
          case 3:
            exit(0);
           default:
            printf("Not a option.\n");
            exit(0);
        }


      // exit game
      case 4:
        exit(0);
       default:
            printf("Not a option.\n");
            exit(0);
 
  }

  return 0;
}
