#include<stdio.h>
int sum(int *,int );
int main ()
{
	int arr[]={1,4,2,8,5};int su=0;
	printf("sum=%d\n",sum(arr,su));	
}
int sum(int *arr,int su)
{ if(*arr=='\0')
		return su;
	su+=*arr++;
	sum(arr,su);
}
