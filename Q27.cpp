#include<stdio.h>
int main()
{
	int num,i=0;
	scanf("%d",&num);
	while(num>0)
	{
	 
	 if((num&0x01)==0){
	 	i++;
	 	num>>=1;
	 }	 
	 else	 
	 break;
	}printf("trailing 0's= %d'",i); 
	return 0;
}
