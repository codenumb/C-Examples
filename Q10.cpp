#include<stdio.h>
int main()
{
	char *numAl[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	char *numBl[]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	char *numCl[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty","hundred","thousund"};
//printf("numAl[2]=%s",numAl[2]);
	char num[4];int i=0;
	printf("enter number less than 1000\n");
	scanf("%s",num);
	while(num[i]!='\0')	
		i++;
	i--;
	switch (i)
	{
		case 0:			
			printf("%s",numAl[num[i]-48]);
			break;
		case 1:
			if((num[0]-48)==1)
			{
			printf("%s",numBl[num[1]-48]);break;	
			}			
			if((num[1]-48)==0)
			printf("%s",numCl[num[0]-48]);break;
			printf("%s %s",numCl[num[0]-48],numAl[num[1]-48]);
			break;
		case 2:
			if((num[1]-48)==1)
			{
				printf("%s hundred and %s",numAl[num[0]-48],numBl[num[2]-48]);break;
			}
			else if((num[2]-48)==0)			
			{
				printf("%s hundred and %s",numAl[num[0]-48],numCl[num[1]-48]);break;
			}
			printf("%s hundred and %s %s",numAl[num[0]-48],numCl[num[1]-48],numAl[num[2]-48]);
			break;
		default :
			printf("invalid number!\n");
			break;
	}
return 0;
}

