#include<stdio.h>
int main()
{
	int num,i=0;
	scanf("%d",&num);
	while(num>0){
		if((num&0x01)==1){
		printf("Lowest set bit is =%d",i);
		break;	
		}		
		num>>=1;
		i++;
	}
}
