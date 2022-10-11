#include<stdio.h>
int main()
{
   int num;
   printf("enter the numer you want multiplication tabel of:\n");
   scanf("%d",&num);
   printf("multiplication table of %d is as follow :\n",num);
   // printf("%d * 1 = %d\n",num,num*1);
   //printf("%d * 2 = %d\n",num,num*2);
   //printf("%d * 3 = %d\n",num,num*3);
   //printf("%d * 4 = %d\n",num,num*4);
   //printf("%d * 5 = %d\n",num,num*5);
   //printf("%d * 6 = %d\n",num,num*6);
   //printf("%d * 7 = %d\n",num,num*7);
   for (int i=0;i<11;i++)
   {
        printf("%d * %d = %d\n",num,i,num*i);

   }
   return 0;


}