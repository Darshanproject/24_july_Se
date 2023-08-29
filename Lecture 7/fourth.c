#include<stdio.h>
#include<string.h>
main(){
	char name[20],name1[20];
	printf("Enter the string :");
	scanf("%s",name);
	printf("Enter the Second string :");
	scanf("%s",name1);
	
	if(strcmp(name,name1)==0){
		printf("Is equal");
	}else if(strlen(name)>strlen(name1)){
		printf("String1 is greater then string 2");
	}else if(strlen(name1)>strlen(name)){
		printf("String2 is greater then string 1");
	}
	else{
		printf("Not Equal");
	}
}
