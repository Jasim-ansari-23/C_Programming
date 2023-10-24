{
//     int rating;
//     printf("Type your rating for this movie 1 to 5\n");
//     scanf("%d", &rating);

//     switch (rating)
//     {
//     case 1:
//         printf("Your rating is 1\nWe apreciete your rating\n");
//         break;
//     case 2:
//         printf("Your rating is 2\nWe apreciete your rating\n");
//         break;
//     case 3:
//         printf("Your rating is 3\nWe apreciete your rating\n");
//         break;
//     case 4:
//         printf("Your rating is 4\nWe apreciete your rating\n");
//         break;
//     case 5:
//         printf("Your rating is 5\nWe apreciete your rating\n");
//         break;
//     default:
//         printf("Your rating is invalid\nKindly type a ratings between 1 to 5");
//     }
//     return 0;
// }
// {
//     int marks;
//     printf("Enter your marks\n");
//     scanf("%d", &marks);

//     switch (marks)
//     {
//     case 30:
//         printf("Your grade is D, which is very bad\nYou should have did best\n");
//         break;
//     case 50:
//         printf("Your grade is C, Good\nYou should have did well\n");
//         break;
//     case 60:
//         printf("Your grade is B, Great\nYou should have did best\n");
//         break;
//     case 80:
//         printf("Your grade is A, Excellent\nYou did well, Keep it up\n");
//         break;
//     default:
//         printf("You should enter 30, 50, 60 and 80, kindly enter right marks\n");
//         break;
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int week;

    printf("Enter the week day between 1-7\n");
    scanf("%d", &week);

    switch (week){
        case 1: printf("Monday");
        break;
        case 2: printf("Tuesday");
        break;
        case 3: printf("Wednesday");
        break;
        case 4: printf("Thursday");
        break;
        case 5: printf("Friday");
        break;
        case 6: printf("Saturday");
        break;
        case 7: printf("Sunday");
        break;
        default: printf("Gslat h laure");
    }
    return 0;
}