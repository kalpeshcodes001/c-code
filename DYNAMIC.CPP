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

string concat(strig s1,strig s2)
{

}





