#include<conio.h>

#include<iostream.h>
#include<string.h>

struct stud
{
	int rn;
	char nm[20];
}

void main()
{
	FILE *fr;
	char c;
	struct stud1;
	int n,loc,num;
	clrscr();
	fp=fopen("demo5.txt","r+");
	fseek(fp,0,SEEK_SET);

	printf("\n Existinng content of the file");
	printf("\n Roll no \t name \n");

	while(1)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(feod(fp))
			break;
		printf("%d \t %s \n",s1.rn,s1.nm);
	}

	fs=ftell(fp);
	num=fs/sizeof(s1);
	printf("\n file size=%d",fs);
	printf("\n Num of records %d,num");
	printf("\n Enter rectord no to modify");
	scanf("%d",&n);
	if(n>num)
	{
		printf("\n out of range");
	}
	else
	{
		printf("Enter modified value");
		printf("\n Enter roll number and name:");
		scanf("%d %s",&s1.rn,s1.nm);
		loc=(n-1)*sizeof(s1);
		fseek(fp.loc,SEEK_SET);
		fwrite(&s1.sizeof(s1),1,fp);
	}
	fseek(fp,0,SEEK_SET);
	printf("\n After Modify the record content of the file");
	printf("\n Roll no\t name \n");
	while(1)
	{
		fread(&s1,sizeof(s1),1,fp);
		if(feod(fp))
			break;
		printf("%d \t %s \n",s1.rn,s1.nm);
	}
	fclose(FP);
	getch();
}