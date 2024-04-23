#include <stdio.h>

void NatureOfNum(int num);
int main(){
    int Num;

    printf("Enter the Number:");
    scanf("%d",&Num);
    NatureOfNum( Num);
    return 0;
}

void NatureOfNum(int num){
    if (num > 0){
        printf("The Number is positive .");
    }else if (num<0)
    {
        printf("The Number is Negative");
    }
    else
    {
        printf("The number is 0.");
    }

}
