#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        if (i == 4)
        {
            goto text;
        }
        else{
            printf("%d\n",i);
        }
    }
    text : printf("blank text :)");
    return 0;
}
