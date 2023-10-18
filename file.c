#include<stdio.h>
 
int main()
{
 int rows;
  scanf("%d",&rows);
  for(int i=0;i<rows;i++)
  {
   int sum=0;
   for(int j=0;j<4;j++)
   {
    int mark;
    scanf("%d",&mark);
    if(mark<0||mark>100)
    {
     printf("Invalid marks\n");
     break;
    }
    sum=sum+mark;
   }
   float avg=sum/4.0;
   printf("average marks is %f\n",avg);
   if(avg>=80)
   printf("grade is %c\n",'A');
   else if(avg>=65&&avg<=79)
   printf("grade is %c\n",'B');
   else if(avg>=40&&avg<=64)
   printf("grade is %c\n",'C');
   else
   printf("grade is %c\n",'F');
   }
   return 0;
   }
 
