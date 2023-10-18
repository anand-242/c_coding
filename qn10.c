#include<stdio.h>
#include<math.h>
double pow(double,double);

int main()
{
 printf("enter the value of x\n");
 int x;
 scanf("%d",&x);
 float res=x-1)/x;
 float sum=0;
 int n=9;
 int i=2.0;
 while(i<9)
 {
  sum=sum+pow(res,i);
  i++;
 }
 sum=sum/2;
 res=res+sum;
 printf("answer is %f\n",res);
 return 0;
 }
