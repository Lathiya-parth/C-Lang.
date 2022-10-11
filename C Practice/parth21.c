#include<stdio.h>
struct student
{
  int id;
  int marks;
  char fav_char;
  
};
int main()
{
    struct student parth,ravi,prince;
    parth.id=1;
    ravi.id=2;
    prince.id=3;
    parth. marks =66;
    ravi. marks =466;
    prince. marks =466;
    parth.fav_char = 'p';
    ravi.fav_char = 'p';
    prince.fav_char = 'p';
    printf("parth got %d marks \n",parth.marks);
    return 0;
    
}


