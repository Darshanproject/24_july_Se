//Without without 

#include<stdio.h>
main(){
	sum();
	printf("This for our addtion :");
	sum();
}

void sum(){
	int a,b;
	printf("Enter the values : ");
	scanf("%d",&a);
	printf("Enter the values : ");
	scanf("%d",&b);
	printf("This is your addtion %d",a+b);
}
