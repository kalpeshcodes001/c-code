#include<iostream.h>
#include<conio.h>

class Matrix()
{
	float **p;
	int r,c;
	public:
		Matrix(int r1,int c1);
		void disp();
		Matrix();
}

Matrix :: Matrix(int r1,int c1)
{
	r=r1;
	c=c1;
	p=new float*[r];
	for(int i=0;i<r;i++)
		p[i]=new float(c);
	for(i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"Enter value:";
			cin>>p[i][j];
		}
	}
}
void Matrix :: disp()
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\t"<<p[i][j];
		}
	cout<<endl;

	}
}