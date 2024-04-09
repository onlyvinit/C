#include <stdio.h>

int main() {
    int k, num;
    int sum = 0;

    printf("Enter the value of k: ");
    scanf("%d", &k);

    printf("Enter the value of num: ");
    scanf("%d", &num);

    if (k > num) {
        int temp = k;
        k = num;
        num = temp;
    }

    for (int i = k; i <= num; i++) {
        sum += i;
    }

    printf("Sum of numbers between %d and %d is %d\n", k, num, sum);

    return 0;
}
