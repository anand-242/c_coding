#include<stdio.h>
#include<math.h>
double pow(double,double);
float speed_sound(float);
float speed_sound(float t)
 {
 float a=1086*pow(((5*t+297)/247),0.5);
 return a;
 }
int main()
 {
  float t;
  printf("enter the value of temp\n");
  scanf("%f",&t);
  float res=speed_sound(t);
  printf("the value of speed is %f \n",res);
  return 0;
 }
