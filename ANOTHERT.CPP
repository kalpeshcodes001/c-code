#include<iostream.h>
#include<conio.h>

class B:	//forward declaration

class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter a and b:";
			cin>>a>>b;
		}

		void put()
		{
			cout<<"\n a="<<a<<"\t b="<<b;
		}

		/*operator B()
		{
			B b1;
			b1.sum= a+b;
			return b1;
		}*/

		int get a()
		{
			return a;
		}

		int get b()
		{
			return b;
		}

};

class B
{
	int sum;
	public:
		B(A a1)
		{
			A a1;
			clrscr();
			a1.get();
			B b1=a1; //class A -> class B  b1= B(a1)
			a1.put();
			b1.put();
			getch();
		}
}