#include<stdio.h>
#include<math.h>
int main ()
{
	char a[10];int i=0,j=0,bin[4]={0},temp;
	scanf("%s",&a);
    for(i=0;a[i]!='\0';i++)    
	{	
    	switch(a[i])
    	{
    		case 'a':			
    		printf(" 1010");
         	break;
         	case 'A':			
    		printf(" 1010");
         	break;
         	case 'b':			
    		printf(" 1011");
         	break;
         	case 'B':			
    		printf(" 1011");
         	break;
         	case 'c':			
    		printf(" 1100");
         	break;
         	case 'C':			
    		printf(" 1100");
         	break;
         	case 'd':			
    		printf(" 1101");
         	break;
         	case 'D':			
    		printf(" 1101");
         	break;
         	case 'e':			
    		printf(" 1110");
         	break;
			case 'E':			
    		printf(" 1110");
         	break;
			case 'f':			
    		printf(" 1111");
         	break;
         	case 'F':			
    		printf(" 1111");
         	break;
         	default:
         	temp=a[i]-48;
         	//printf("\ntemp=%d",temp);

         	while(temp>=1){
         		bin[j++]=temp%2;
         		temp/=2;
			 }
			 j=3;
			 while(j>=0){			 
			 printf("%d",bin[j]);
			 j--;
			 }
         	break;
		}
	}
	//printf("bin=%d",dec);
return 0;
}
