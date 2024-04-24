#include <stdio.h>

//calculating temprature in Fahrenheit using float

void temp(float fahrenheit);

int main() {
    float fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    temp(fahrenheit);

    return 0;
}

void temp(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", fahrenheit, celsius);
}
