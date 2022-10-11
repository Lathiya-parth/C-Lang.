#include<stdio.h>

struct driver
{
    char name[34];
    char dino[45];
    char route[47];
    int kms;

};

int main()
{
    struct driver d1,d2,d3;
    printf("enter the details of the Driver No 1\n");
    printf("enter the name of first driver\n");
    scanf("%s",&d1.name);

    printf("enter the dino of first driver\n");
    scanf("%s",&d1.dino);

    printf("enter the route of first driver\n");
    scanf("%s",&d1.route);

    printf("enter the number of kms of first driver\n");
    scanf("%d",&d1.kms);

   printf("enter the details of the Driver No 2\n");
    printf("enter the name of second drivers\n");
    scanf("%s",&d2.name);

    printf("enter the dino of second drivers\n");
    scanf("%s",&d2.dino);

    printf("enter the route of second drivers\n");
    scanf("%s",&d2.route);

    printf("enter the number of kms of second drivers\n");
    scanf("%d",&d2.kms);

   
    printf("enter the details of the Driver No 3\n");
    printf("enter the name of third drivers\n");
    scanf("%s",&d3.name);

    printf("enter the dino of third drivers\n");
    scanf("%s",&d3.dino);

    printf("enter the route of third drivers\n");
    scanf("%s",&d3.route);

    printf("enter the number of kms of third drivers\n");
    scanf("%d",&d3.kms);

    printf("***********printing information of these driver:*******\n");
    printf("for driver no 1:\n name is %s",d1.name);
    printf("dl number is %s\n",d1.dino);
    printf("route is %s\n",d1.route);
    printf("kms is %d\n",d1.kms);

    printf("for driver no 2:\n name is %s",d2.name);
    printf("dl number is %s\n",d2.dino);
    printf("route is %s\n",d2.route);
    printf("kms is %d\n",d2.kms);

    printf("for driver no 3:\n name is %s",d3.name);
    printf("dl number is %s\n",d3.dino);
    printf("route is %s\n",d3.route);
    printf("kms is %d\n",d3.kms);

    return  0;
    
   


}