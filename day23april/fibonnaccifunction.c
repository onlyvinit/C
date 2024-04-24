#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number : ");
    scanf("%d", &n);
    
    printfibonacci(n);
    
    return 0;
}


void printfibonacci(int n) {
    int one = 0; 
    int two = 1; 
    int next;
    
    printf("Fibonacci Series up to %d:\n", n);
    
    
    printf("%d, %d, ", one, two);
    
    
    next = one + two;
    while (next <= n) {
        printf("%d, ", next);
        one = two;
        two = next;
        next = one + two;
    }
}


