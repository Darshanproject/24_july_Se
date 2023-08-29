#include<stdio.h>
union person{
	int age;
	float salary;
	char name[20];
}u1;
main(){
	union person u1={
		24,25000,"Darshan"
	};
	printf("%s \n",u1.name);	
	printf("%d \n",u1.age);
	printf("%.2f \n",u1.salary);
	
}
