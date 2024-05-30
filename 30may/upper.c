#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];


    printf("Enter a string: ");
    gets(input);

    for (int i = 0; i < strlen(input); i++) {
        input[i] = toupper(input[i]); 
    }
    puts(input);

    return 0;
}
