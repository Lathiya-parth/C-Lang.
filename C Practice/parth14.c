#include<stdio.h>
int main()

{
    int num;
    printf("enter the number you want the factoriel of \n");
    scanf("%d",&num);
    printf("the factoriel of %d is %d\n",num,factoriel(num));
    return 0;
}
    
int factoriel(int number)
{
  if(number == 1 || number == 0)
  {
    return 1;
  }
  else {
    return (number * factoriel(number - 1));
  } 
}
