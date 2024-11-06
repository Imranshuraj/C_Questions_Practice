// Write a program to input name of the person and respond with "Welcome 'Name' to Imranshuraj"
#include<stdio.h>
int main(){
  char name[20];
  printf("Please enter your name(You can type Only 2o letters):-\n");
  scanf("%19s",&name);
  printf("Welcome %s to Imranshuraj\n",name);
  return 0;
}