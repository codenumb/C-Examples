#include<stdio.h>
int find(int*,int,int);
int main()
{
	int arr[]={2,14,7,5,19,1};
	int max=0 ;int min=0;
	if(arr[0]<arr[1]){
			max=arr[1];
			min=arr[0];
	}
	else
	{
		min=arr[1];max=arr[0];
	}
int	c=find(arr,max,min);
	return 0;
}
int find(int*arr,int max,int min)
{
	if(*arr=='\0')// ask doubt :special case 0
	 {
	 	printf("min=%d max=%d",min,max);
	 	return 0;
	 }
	 if(*arr<min)
	 min=*arr;
	 if(*arr>max)
	 max=*arr;
	 arr++;
	 find(arr,max,min);
}
