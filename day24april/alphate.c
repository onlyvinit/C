#include <stdio.h>

void latter(); 

int main() {
    
    latter(); 

    return 0;
}

void latter(){
    char alphabet = 'a';
    int SkipaleAlphabet = 3;
    do {
        printf("%c ", alphabet);
        alphabet += SkipaleAlphabet + 1;
    } while (alphabet <= 'z');
} 
