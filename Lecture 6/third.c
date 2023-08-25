#include<stdio.h>
main(){
	int a,b,c;
	c:
	printf("Enter the values ");
	scanf("%d",&a);
	printf("Enter the values :");
	scanf("%d",&c);
	sum(a,c);
	goto c;                                          

}
void sum(int a, int b){
	printf("%d",a+b);
	
}

