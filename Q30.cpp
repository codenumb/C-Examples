#include<stdio.h>
int main()
{
	int num,ones=0,zeros=0,temp;
	scanf("%d",&num);
	temp=num;
	while(num>0){
		if(num&0x01==1?ones++:zeros++)
		num>>=1;
	}	
	if(temp>7?printf("ones=%d zeros=%d",ones-1,zeros-1):printf("ones=%d zeros=%d",ones-1,zeros+1));
	return 0;
}
