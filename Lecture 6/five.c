#include<stdio.h>
main(){
	int ans;
	ans=sum();
	printf("%d",ans);
}

int sum(){
	int a,b;
	printf("Enter ");
	scanf("%d%d",&a,&b);
	return a+b;
}
