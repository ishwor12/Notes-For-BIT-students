#include<stdio.h>
#include<string.h>
union record
{
	int i;
	float f;
	char str[20];
}record;
int main()
{
	record.i=10;
	record.f=220.5;
	strcpy(record.str,"c programming");
	printf("record.i : %d\n",record.i);
	printf("record.f : %f\n",record.f);
	printf("record.str : %s\n",record.str);
	return 0;
}
