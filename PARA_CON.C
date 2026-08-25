#include<iostream.h>
#include<stdio.h>

class A
{
	int a,b;
	public:
	       A(int x,int y)//parameterise constructor
	       {
		cout"\n parameterized con."
	       }
};
void main()
{
	int x,y;
	clrscr();
	cout<<"\n Enter two numbers:";
	//A a2;
	A a1(x,y);
	a1.put();
	getch();
}