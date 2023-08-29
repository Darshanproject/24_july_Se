#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter the name");
	scanf("%s",name);
	printf("Enter the name");
	scanf("%s",name1);
	strupr(name);
	printf("%s \n",name);
	strlwr(name1);
	printf("%s",name1);
}
