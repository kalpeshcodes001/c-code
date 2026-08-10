#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
	int n,i,fact=1;
	clrscr();
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial:"<<fact;
	getch();
}