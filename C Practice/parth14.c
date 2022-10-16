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
    
//     Factorial without recursion
    
        int n, i;
    unsigned long long factorial = 1;
 
    printf("Enter a number to find factorial: ");
    scanf("%d",&n);
 
    if (n < 0)
        printf("Error! Please enter any positive integer number");
 
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             
        }
        printf("Factorial of Number %d = %llu", n, factorial);
    }
    
}
