#include <stdio.h>

int main (){

     for (int i = 1; i <= 10; i++)
     {
        if (i==5 || i==7)
        {
            continue;
        }
        else{
            printf("%d\n",i);
        }
     }

    return 0; 
}