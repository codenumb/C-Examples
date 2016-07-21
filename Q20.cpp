#include<stdio.h>
int main()
{
	int arr[5],neg=0,i=0;
	printf("enter 5 numbers\n");
	while(i<5)
		scanf("%d",&arr[i++]);	
	for(i=0;i<5;i++)
	{
		if(arr[i]<0)
		neg++;
	}
	printf("number of -ve numbers=%d",neg);
	return 0;
}
