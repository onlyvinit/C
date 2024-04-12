#include <stdio.h>

int main(){
    int Numone;
    int Numtwo;

    do
    {
        printf("Enter the first number: ");
        scanf("%d", &Numone);
        if (Numone <= 0)
        {
            printf("Please enter a positive number\n");
        }
        
    } while (Numone <= 0);

    do
    {
        printf("Enter the second number: ");
        scanf("%d", &Numtwo);
        if (Numtwo <= 0)
        {
            printf("Please enter a positive number\n");
        }
    } while (Numtwo <= 0);

    int result = Numone * Numtwo;
    printf("Your result is: %d\n", result);
    
    return 0;
}
