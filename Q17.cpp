#include<stdio.h>
int main()
{
	int a[]={1,5,4,1,7,8,1,6,4,5};
	int b[10]={0},i=0,j=0;int temp=10;
	for(;i<temp;i++)
	{
		b[a[i]]++;
		if(b[a[i]]>1)		 
		{   
		   j=i;temp--;
		  while(j<temp)
			{
			  a[j]=a[j+1];
			  j++;
			}	
		}		
	}
    for(i=0;i<temp-1;i++)
	printf("%d",a[i]);	
	return 0;	
}
