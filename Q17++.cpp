#include<stdio.h>
int main()
{
	int a[5]={0},i=0,j,temp=5,k;
	while(i<5)
    scanf("%d",&a[i++]);
    for(i=0;i<5;i++)
    {
    	j=0;
    	while(j<i)
    	{						//checking duplicate
    		if(a[j]==a[i])
    		{
    			k=i;temp--;
    			while(k<temp) //deleting positions
    			{
    			a[k]=a[k+1];
    			k++;
				}    	
    			a[temp]='\0';
			}
		j++;	
		}
		if(a[i]!='\0')
		printf("%d",a[i]);
	}
	return 0;
}
