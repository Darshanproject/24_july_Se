#include<stdio.h>
main(){
	int i,s[100],c[100];
	for(i=0;i<100;i++)
	{
		printf("Enter the values");
		scanf("%d %d",&s[i],&c[i]);
		sum(s[i],c[i]);
	}
}

void sum(int a,int b){
	printf("%d",a+b);
}
