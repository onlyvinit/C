#include<stdio.h>

int sqaure(int side);
int _sqaure(int *side);
int main() {

    int side = 4;
    sqaure(side);
    printf("Original side: %d\n", side);
    
    _sqaure(&side);
    printf("After _sqaure: %d\n", side);

    return 0;
}

int sqaure(int side) {
    side = side * side;
    printf("Inside sqaure function: %d\n", side);
    return side; 
}

int _sqaure(int *side) {
    *side = (*side) * (*side); 
    printf("Inside _sqaure function: %d\n", *side);
    return *side; 
}
