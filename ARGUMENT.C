#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter two number";
			cin>>a>>b;
		}
		void put()
		{
			cout<<"\n a="<<a;
		}
		void swap1(A a1)//pass by value
		{
			int c=a1.a;
			a1,a=a1.b;
			a1.b=c;
		}
		void swap2(A & a1)//pass by reference
		{
			int c=a1.a;
			a1,a=a1.b;
			a1.b=c
		}
		void swap3(A*a1)//pass by reference
		{
			int c=a1.a;
			a1,a=a1.b;
			a1.b=c
		}
		void swap3(A*a1)//pass by pointer
		{
			int c=a1.a;
			a1,a=a1.b;
			a1.b=c
		}
		void swap4(const A & a1)//pass by constant
		{
			cout<<"\n a="<<a1,a<<"\tb="<<a1b;
			/* int c=a1.a;
			a1.a=a1.b;
			a1.b=c;*/
		}

		void swap5(const A* a1)//pass by pointer
		{
			cout<<"\n a="<<a1->a<<"\t b="<<a->b;
			/* int b=a1->a;
			a1->a=a1->b*/;
		}
		void main()
		{
			A a1;
			clrscr();
			a1.get();
			a1.put();

			a1.swap1(a1);
			cout<<"\n after swap1 pass by value";
			a1.put();

			a1.swap2(a2);
			cout<<"\n After swap2 pass by reference";
			a1.put();

			a3.swap3(a3);
			cout<<"\n after swap3 pass by pointer";
			a1.put();

			a1.swap4(a4);
			cout<<"\n after swap4 pass by const reference";
			a1.put();

			a1.swap5(a5);
			cout<<"\n after swap5 pass by const pointer";
			a1.put();

			getch();
		}
}







}


