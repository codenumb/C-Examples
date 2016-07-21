#include<stdio.h>
int main()
{
	int arr[10],brr[10]={0},i=0;
	while(i<10)
	{
		scanf("%d",&arr[i]);
		brr[arr[i++]]++;		
	}
	for(i=0;arr[i]!='\0';i++)
	{
		if(brr[arr[i]]==1)
		printf("%d ",arr[i]);
	}
	return 0;
}
