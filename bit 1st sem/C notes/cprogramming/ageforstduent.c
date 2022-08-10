//Example: Simple example of structure to store information of 2 student. 
 
#include<stdio.h> 
int main() 
{ 
    struct studentData
	{  
	 char name[30];   
	 int rollNo;  
	  int age;     
	  } student1, student2;
	    printf("Enter Data for student1:\n"); 
	    printf("Enter name:");   
		fgets(student1.name,20,stdin);  
		 printf("Enter rollNo:");   
	     scanf("%d",&student1.rollNo);   
	      printf("Enter age:");    
		  scanf("%d",&student1.age);     
		 printf("\nEnter Data for student2:\n");   
		 printf("Enter name:");   
		 fflush(stdin);
		 fgets(student2.name,20,stdin);
		printf("Enter rollNo:"); 
	    scanf("%d",&student2.rollNo); 
        printf("Enter age:"); 
	    scanf("%d",&student2.age); 
		
		  
		 printf("Displaying data of student1:\n");   
		printf("Name=%s\n",student1.name); 
		printf("RollNo=%d\n",student1.rollNo); 
		printf("Age=%d\n",student1.age); 
		printf("\nDisplaying data of student1:\n");
	     printf("Name=%s\n",student2.name);    
		  printf("RollNo=%d\n",student2.rollNo);    
		   printf("Age=%d\n",student2.age); 
		       return 0;
 } 
