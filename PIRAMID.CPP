#include<iostream.h>
#include<conio.h>

int main()
{
	int i,j;
	clrscr();
	for(i=5; i>=1; i--)
	{

		for(j=1; j<=i; j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
