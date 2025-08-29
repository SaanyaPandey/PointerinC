/*This code will show you the subtraction of 2 numbers using pointers.*/

#include <stdio.h>
#include <conio.h>
int main(){
  int a , b; //variable declaration
  //specifying address
  int *p = &a; 
  int *q = &b;
  int result;
  int *r = &result;
  //taking user input
  printf("Enter the first number: ");
  scanf("%d", &a);
  printf("Enter the second number you want: ");
  scanf("%d",&b);
  //now subtract them
  *r = a - b;
  //show result
  printf("the result of the addition of two numbers is:%d",*r);
  return 0;
}