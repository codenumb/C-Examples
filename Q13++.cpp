#include<stdio.h>
int main()
{
	int a[10]={0},b[10]={0},i=0,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		j=0;
	  		while(j<=i)
	  		{
	  			if(a[j]==a[i]){
	  				b[j++]++;
	  				break;
				  }	  			
	  			else
	  			j++;
	  		}
	}
	for(i=0;i<10;i++)
	{
		if(b[i]>1)
		printf("%d has %d duplicate\n",a[i],b[i]);
	}
	return 0;
}
