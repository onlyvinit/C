#include <stdio.h>

int main(){
    int first = 0;
    int second = 1;
    int n,result;
    printf("Enter the value of n:");
    scanf("%d",&n);
  
  for (int i = 1; i <= n; i++)
  {
    printf("%d",first);
    result = first + second;
    first = second;
    second = result;
  }
  return 0;
}