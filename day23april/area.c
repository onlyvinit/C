#include <stdio.h>

int areaOfSquare(int side); 

int main(){
    int side;
    printf("Enter the length of side: ");
    scanf("%d",&side);
    int area = areaOfSquare(side);
    printf("Area of the square: %d\n", area); 
    return 0;
}

int areaOfSquare(int side){
    return side * side;
}
