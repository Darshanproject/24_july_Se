/*
syntax:
(condtion)?expe:exper;

*/

#include<stdio.h>
main()
{
	int age;
	printf("Enter yoru age :");
	scanf("%d",&age);
	(age > 18 && age > 0)?printf("Adult"):printf("teenager");
}
