#include<stdio.h>
main(){
	int num;
	printf("Enter the value ");
	scanf("%d",&num);
	if(num > 90 && num < 100){
		printf("A grade");
	}else if(num > 80 && num<=90){
		printf("B garde");
	}else if(num >60 && num<=80)
	{
		printf("C garde");
	}else if(num >= 45 && num<=60){
		printf("D grade");
	}else if(num > 0 && num< 45)
	{
		printf("Fail");
	}
	else{
		printf("Invalid input");
	}
}
