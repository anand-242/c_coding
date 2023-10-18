#include<stdio.h>
#define base 1990
float population(int);

float population(int year)
 {
   int curr=year-base;
   float population_year=curr*2.184+52.966;
   return population_year;
  }
int main()
 {
  printf("enter the year after 1990\n");
  int year;
  scanf("%d",&year);
  float ans=population(year);
  printf("population in the year %d is %f \n",year,ans);
  return 0;
 }
