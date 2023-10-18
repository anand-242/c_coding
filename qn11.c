#include<stdio.h>
#include<math.h>
int factorial(int);
int isPrime(int);
int isEven(int);

int factorial(int n)
{
 int fact=1;
 for(int i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 return fact;
}

int isEven(int n)
{
 if(n%2==0)
 return 1;
 else
 return 0;
}

int isPrime(int n)
{
 if(n==0||n==1)
  return 0;
 else if(n==2)
  return 1;
 else if(n%2==0)
  return 0;
 else
 {
  int i=3;
  while(i<=sqrt(n))
  {
   if(n%i==0)
    return 0;
  }
  return 1;
 }
}
int main()
{
 
 printf("enter 1 to find factorial of a number\n");
 printf("enter 2 to find whether a number is prime or not\n");
 printf("enter 3 to find whether a number is even or odd\n");
 printf("enter 4 to exit\n");
 printf("enter your choice\n");
 int choice;
 scanf("%d",&choice);
 if(choice==4)
 return 0;
   while(choice!=4){
     int no;
     if(choice==1)
     {
       printf("enter the no to find factorial\n");
       scanf("%d",&no);
       int res=factorial(no);
       printf("factorial of no %d is %d\n",no,res);
     }
     else if(choice==2)
     { 
       printf("enter the no to find ISprime\n");
       scanf("%d",&no);
       int res=isPrime(no);
       if(res==0)
       printf("number %d is not prime\n",no);
       else
       printf("number %d is prime\n",no);
      }
      else if(choice==3)
      {
       printf("enter the no to find isEven\n");
       scanf("%d",&no);
       int res=isEven(no);
       if(res==1)
       printf("number %d is even\n",no);
       else
       printf("number %d is not even\n",no);
      }
         printf("enter 1 to find factorial of a number\n");
	 printf("enter 2 to find whether a number is prime or not\n");
	 printf("enter 3 to find whether a number is even or odd\n");
	 printf("enter 4 to exit\n");
	 printf("enter your choice\n");
	 scanf("%d",&choice);
         printf("choice is %d\n"choice);
     }
     return 0;
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
