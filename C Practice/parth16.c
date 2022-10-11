#include<stdio.h>
void changevalue(int*address)
{
    *address=345;

}
int main()
{
    int a=34,b=54;
    printf("the value of now is %d\n",a);
    changevalue (&a);
    printf("the value of  now is %d\n",a);
    return 0;
}