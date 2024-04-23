#include <stdio.h>

void PrintHey();
void printBonjour();
void printHello();
void printWassup();

int main() {
    char Nation;

    do {
        printf("Enter the name of the Country: ");
        scanf(" %c", &Nation);
        switch (Nation)
        {
        case 'I':
            PrintHey();
            break;
        case 'F':
            printBonjour();
            break;
        case 'H':
            printHello();
            break;
        case 'W':
            printWassup();
            break;
        default:
            printf("Enter the correct country.\n");
            break;
        }
    } while(1);

    return 0;
}

void PrintHey() {
    printf("Namaste!\n");
}
void printBonjour(){
    printf("Bonjour\n");
}
void printWassup(){
    printf("What's Going On !\n");
}
void printHello(){
    printf("Hello You!\n");
}
