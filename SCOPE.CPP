#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int a=10;
void main()
{
	int a=100;
	{
		int a=1000;
		clrscr();
		printf("\n a=%d",a);
	}
	printf("\n a=%d",a);
	getch();
}