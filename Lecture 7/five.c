#include<stdio.h>
#include<string.h>
main(){
	char name[20]={"Hello"},name1[20];
	printf("Enter your name");
//	scanf("%s",&name1);
	gets(name1);
	strcat(name,name1);
	printf("\n%s ",name);
}
