/*
Syntax:
struct struct_name {
	int age
	float salary
	char name
	double  bills
}s1;


struct struct_name s1={};
*/
#include<stdio.h>
struct person{
	int age;
	double salary;
	char name[20];
}s1;


main(){
	
	struct person s2={ 20,28000.00,"Ridham"};
	s1.age=22;	
	s1.salary=25000.00;
	strcpy(s1.name,"Dhaval");
	
	printf("%s \n",s1.name);
	printf("%d \n",s1.age);
	printf("%.2lf \n",s1.salary);	
	printf("\n-----------------------------------\n");
	printf("%s \n",s2.name);
	printf("%d \n",s2.age);
	printf("%.2lf \n",s2.salary);	
}
