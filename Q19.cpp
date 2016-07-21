#include<stdio.h>
int main()
{
	int arr[5],brr[5]={0},i=0;
	while(i<5)
		scanf("%d",&arr[i++]);	
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
		printf("%d ",arr[i]);
	}
	return 0;
}
