#include<iostream.h>
#include<stdio.h>

int *p,a;
p=&a;

class A
{
	int a;
	int A::p=&A::a;

	(object).(mem)
	(ptrtoobj)->(mem)
	(object).*(ptrmem)
	(ptrtoobj)->*(ptrtomem)
}