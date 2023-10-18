#include<stdio.h>
int IsValidPosition(int);

int IsValidPosition(int n)
 {
  int flag=0;
  int col=0;
  if(n<11||n>88)
   flag=0;
   else
   {
   flag=1;
    int n1=n%10;
    int n2=n/10;
    if((n1%2==0||n2%2==0)&&n2!=0&&n1!=0)
     col=1;
     else
    col=0;
    }
   if(flag==0)
   return 0;
   else if(flag==1&&col==1)
   return 1;
   else
   return -1;
  }
 int main()
  {
  printf("enter the digit\n");
  int no;
  scanf("%d",&no);
  int flag=IsValidPosition(no);
  if(flag==0)
  printf("Invalid position\n");
  else if(flag==1)
  printf("white cell\n");
  else
  printf("black call\n");
 }
  
