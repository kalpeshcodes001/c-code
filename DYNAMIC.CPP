#include<stdio.h>
#include<iostream.h>

void main()
{
	int len;
	char *nm;
	public:
		string() //default class
		{
			cout<<"\n Default dynamic constractor";
		}
		string(char *s)//parameterized con.
		{
			cout<<"\n parameterized dynamic constractor";
			len=0;
			nm=new char[len+1];
			//nm=s;
			strcpy(nm,s);
		}
		void put()
		{
			cout<<"\n Name="<<nm;
		}
		friend string concat(string s1,string s2);
};

string concat(string s1,string s2)
{
	string s3;
	s3.len= s1.len+s2.len ;
	s3.nm=new char[s3.len+1];
	strcpy(s3.nm,s1.nm);
	strcat(s3.nm,s2.nm);
	return(s3);
}
void main()
{
	clrscr();
	string s1("shah"),s2("brijesh"),s3;

	s3=concat(s1,s2);

	s1.put();
	s2.put();
	s3.put();
	getch();

}





