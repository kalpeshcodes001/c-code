#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		A(int x,int y) //parametered constructor
		{
			cout"\n parameterized con.";
			a=x;
			b=y;
		}
		void put()
		{
			cout<<"\n a="<<a<<"\tb="<<b;
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




