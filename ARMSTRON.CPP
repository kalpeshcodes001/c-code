#include<iostream.h>
#include<conio.h>

int main()
{
	int no;
	clrscr();
	cout<<"\n enter any number:";
	cin>>no;
	if(no>0){
		cout<<"\n is positive"<<no;
	}
	else if (no<0){
		cout<<"\n is negative"<<no;
	}
	else{
		cout<<"\n is zero"<<no;
	}
	getch();
	return 0;
}