#include<stdio.h>
int main ()
{
	int a[5],b[5],c[10]={0};int i=0;
	printf("enter the first array\n");
	while(i<5)
	scanf("%d",&a[i++]);
	i=0;
	printf("enter the 2nd array\n");
	while(i<5)
	scanf("%d",&b[i++]);
	for(i=0;i<5;i++){
		c[i]=a[i];
		printf("%d",c[i]);
	}	  
	for(i=0;i<5;i++)
	{
		c[i+5]=b[i];
		printf("%d",c[i+5]);
	}	
	return 0;
}
