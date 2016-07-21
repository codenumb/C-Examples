#include<stdio.h>
int main()
{
	int arr[]={1,4,5,1,8,4,3,5};
	int count[10]={0};int i=0;
	while(i<8){
	count[arr[i++]]++;
 	}
	for(i=0;i<8;i++)
	{
		if(count[i]>1)
		printf("%d has %d duplicates\n",i,count[1]);
		 } 	
	return 0; 
}
