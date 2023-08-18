#include<stdio.h>
main(){
	int i,even=0,odd=0,sumeven,oddsum,num;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&num);
		if(num%2==0)
		{
			even++;
			sumeven+=num;
		}else{
			odd++;
			oddsum+=num;
		}
	}
	printf("You got this many even numbers : %d \n",even);
	printf("You got this many odd numbers : %d \n",odd);
	printf("You got this many sum of  even numbers : %d \n",sumeven);
	printf("You got this many sum of odd  numbers : %d \n",oddsum);
}
