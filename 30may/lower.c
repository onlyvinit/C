#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char n[100];

    printf("Enter a string: ");
    gets(n);

    for (int i = 0; i < strlen(n); i++) {
        n[i] = tolower(n[i]); 
    }

    puts(n);

    return 0;
}
