#include<stdio.h>
#include<string.h>
main(){
	char name[20];
	char name1[20];
	scanf("%s",&name);
	strcpy(name1,name);
	printf("This is org string %s\n",name);
	printf("This is copied string %s \n",name1);
}
