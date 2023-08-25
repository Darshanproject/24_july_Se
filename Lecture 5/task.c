#include<stdio.h>
main(){
	int arr[10],arr2[10],arr5[10],arr10[10],i,j=0,l=0,m=0;
	for(i=0;i<10;i++)
	{
		printf("Enter the values :");
		scanf("%d",&arr[i]);
	}
	printf("This is your list : ");
	for(i=0;i<10;i++)
	{
		printf("%d \t",arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0){
			arr2[j]=arr[i];
			j++;
			
		}
			if(arr[i]%5==0){
			arr5[l]=arr[i];
			l++;
		}
			if(arr[i]%10==0){
			arr10[m]=arr[i];
			m++;
		}
	}
	
	printf("\nThis values are div by 2 ");
	for(i=0;i<j;i++)
	{
		printf("%d \t",arr2[i]);
	}
		printf("\nThis values are div by 5 ");
	for(i=0;i<l;i++)
	{
		printf("%d \t",arr5[i]);
	}
		printf("\nThis values are div by 10 ");
	for(i=0;i<m;i++)
	{
		printf("%d \t",arr10[i]);
	}	
}
