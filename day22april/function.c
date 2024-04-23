#include <stdio.h>

void PrintHey();

int main() {
    char Nation;

    do {
        printf("Enter the name of the Country: ");
        scanf(" %c", &Nation);

        if (Nation == 'I') {
            PrintHey();
            break;
        } else {
            printf("Enter the correct country.\n");
        }
    } while(1);

    return 0;
}

void PrintHey() {
    printf("Namaste!\n");
}
