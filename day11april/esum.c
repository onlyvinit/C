#include <stdio.h>
 int main(){

    int esum = 0;
    int osum = 0;
    
    for (int i = 1; i < 10; i++)
    {
        if (i%2==0)
        {
            esum+= 1 ;
        }
        else
        {
            osum += i;
        }
    if (esum>osum)
    {
        printf("%d", esum-osum);
    }
        else if (osum>esum)
        {
            printf("%d", osum-esum);
        }
       else{
        printf("0");
       } 
    }
    return 0 ;
    
 }