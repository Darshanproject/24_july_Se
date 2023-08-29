#include<stdio.h>
#include<string.h>
main(){
	char name[20]={"Name"},name1='A',name2[20];
	printf("Enter the name ");
	scanf("%s",&name2);
//	strcat(name,name1);
	strcat(name1,name2);
	printf("name with space %s",name);
	
}
