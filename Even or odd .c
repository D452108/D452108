#include<stdio.h>
int main()
{
  int Number;
  printf("Enter the value of Number:-");
  scanf("%d",&Number);
  if(Number%2 == 0)
  {
    printf("The Number is Even");
  }
  else
  {
    printf("The Number is odd");
  }
  return 0;
}
