#include<stdio.h>
#include<conio.h>

void main()
{
  float p,r,t,si;
  clrscr(); //to clear the screen
  printf(“Enter principal,rate and time;”);
  scanf(“%f%f%f”,&p,&r,&t);
  si=(p*r*t)/100;
  printf(“nSI=%f”,si);
  getch(); //to stop the screen
}

