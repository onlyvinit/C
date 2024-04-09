#include <stdio.h>

int main() {
    char input[100]; 
    
    printf("Enter anything: ");
    scanf("%s", input); 
    
    printf("Output:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s\n", input); 
    }
    
    return 0;
}
