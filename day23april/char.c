#include <stdio.h>

int isVowel(char ch); 

int main() {
    char letter;
    
    printf("Enter a letter: ");
    scanf("%c", &letter);
    
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) {
        if (isVowel(letter)) {
            printf("%c is a vowel.\n", letter);
        } else {
            printf("%c is a consonant.\n", letter);
        }
    } else {
        printf("Invalid input. Please enter a valid letter.\n");
    }
    
    return 0;
}

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
