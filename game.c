#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// void game();

int main()
{
    int number, guess, guessednumber = 1;
    srand(time(0));
    number = rand() % 10 + 1;
    do
    {
        printf("Guess the number between 1 to 10\n");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("You have entered the higher number, Please Enter the lower\n");
        }
        else if (guess < number)
        {
            printf("You have entered the lower number, Please Enter the Higher\n");
        }
        else
        {
            printf("Congratsualation, You have guessed the Correct number in %d attempts\n", guessednumber);
        }
        guessednumber++;
    } while (guess != number);
    return 0;
}

// correct gussed

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// void game() {
//   srand(time(NULL));
//   int target = rand() % 10 + 1;
//   int guess;
//   int tries = 0;

//   for (tries = 0; tries < 5; tries++) {
//     printf("Guess a number between 1 and 10: ");
//     scanf("%d", &guess);s

//     if (guess == target) {
//       printf("You guessed the correct number in %d tries!\n", tries + 1);
//       break;
//     } else {
//       printf("That is not the correct number. Try again.\n");
//     }
//   }

//   if (tries == 5) {
//     printf("You were not able to guess the correct number in 5 tries. The correct number was %d.\n", target);
//   }

//   return 0;
// }
