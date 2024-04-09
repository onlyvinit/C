
#include <stdio.h>

int main()
{
    int num;
    printf("Enter The Number:");
    scanf("%d", &num);
    for(int i=1; i<=10; i++ ){
    printf("%d",num);
    printf("x");
     printf("%d",i);
      printf("=");
    printf("%d\n",num*i);
    }

    return 0;
}