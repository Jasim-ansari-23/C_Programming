#include <stdio.h>
void alphabate();

int main() {
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: %c\n", c);

    alphabate();
    return 0;
}

// for loop

void alphabate(){
    char c;
    printf("Enter a sentence: ");
    while ((c = getchar()) != '\n') {
        printf("%c", c);
    }
}