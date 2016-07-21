#include<stdio.h>
int main()
{
	int num,i=0;
	scanf("%d",&num);
	while(num>0)
	{	 
	 	i++;	 		 
	 num>>=1;
	}
	printf("leading 0's= %d'",32-i); 
	return 0;
}
