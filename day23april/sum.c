#include <stdio.h>

int sumOfNaturalNumbers(int n);


int main() {
    int Num;
    
    printf("Enter a positive Number: ");
    scanf("%d", &Num);
    
    if (Num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int total = sumOfNaturalNumbers(Num);
        printf("The sum of  numbers up to %d is %d.\n", Num, total);
    }
    
    return 0;
}
int sumOfNaturalNumbers(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}