#include<stdio.h>
int func1(int array[],int n)

{
    for(int i=0; i<n; i++)
    {
        printf("the value at %d is %d\n",i,array[i]);
    }
   // array[0]=382;
    return 0;

}
int main()
{
    int arr[] = {23,13,3,4};
    printf("the value at index 0 is &d\n",arr[0]);
    func1(arr,4);
    printf("the value at index 0 is &d\n",arr[0]);
    return 0;
}