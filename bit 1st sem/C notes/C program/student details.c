//A program to read name,address,email,phone_no,gender,roll no from user and display it.

#include<stdio.h>
void main()
{
	char name[30],address[30],email[30],gender[6];
	long long int phone_no;
	int roll_no;
	printf("Enter your name:");
	fgets(name,sizeof(name),stdin);
	printf("Enter your address:");
	fgets(address,sizeof(address),stdin);
	printf("Enter your email:");
	fgets(email,sizeof(email),stdin);
	printf("Enter your gender:");
	fgets(gender,sizeof(gender),stdin);
	printf("Enter your phone number:");
	scanf("%lld",&phone_no);
	printf("Enter your roll number:");
	scanf("%d",&roll_no);
	printf("\n==========Displaying information============\n");
	printf("Name:");
	puts(name);
	printf("Address:");
	puts(address);
	printf("Email:");
	puts(email);
	printf("Gender:");
	puts(gender);
	printf("Phone Number=%lld \n",phone_no);
	printf("Roll Number=%d",roll_no);
	
}
