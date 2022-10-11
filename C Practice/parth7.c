#include<stdio.h>
int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);

    switch(age)
    {
        case 1:
        printf("the age is 3\n");
        break;

        case 2:
        printf("the age is 13\n");
       break;
        
        case 3:
        printf("the age is 23\n");
        break;

        default:
        printf("age is not 3,13,or 23");
        break;
    }
    return 0;
}