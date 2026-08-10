#include<stdio.h>
#include<conio.h>
#include<iostream.h>

void main()
{
	int i,j,count;
	clrscr();
	for(j=1;j<=10;j++)
	{
		count=0;
		for(i=2;i<=j/2;i++)
		{
		 if(j%i==0)
		 {
			count++;
			break;
		 }
		}
		if(count>0)
		{
			cout<<"\n Number"<<j;
			cout<<" is not prime";
		}
		else
		{
			cout<<"\n Number"<<j;
			cout<<" is prime";
		}
	}
	getch();
}