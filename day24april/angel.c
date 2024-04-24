#include <stdio.h>

//find third angel using function 

int angel3(int angle1, int angle2);

int main() {
    int angle1, angle2;

    printf("Enter the first angle: ");
    scanf("%d", &angle1);
    printf("Enter the second angle: ");
    scanf("%d", &angle2);

    int angle3 = angel3(angle1, angle2);
    printf("The third angle is: %d degrees\n", angle3);

    return 0;
}

int angel3(int angle1, int angle2) {
    int angle3 = 180 - angle1 - angle2;
    return angle3;
}
