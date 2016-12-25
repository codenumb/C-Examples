#include "stdio.h"
#include "string.h"
#include "stdbool.h"
int delete(char*src,unsigned char*);
int main ()
{
	unsigned char arr[8]={0x10,0x08,0x0A,0xF5,0x34,0xBC,0x1E,0x7D};
	unsigned char brr[8]={0x80,0x5A,0x47,0xFB,0xC5,0x4D,0x6E,0x38};
	unsigned char crr[8]={0x10,0x31,0x08,0x80,0xF5,0x4D,0x0A,0x6E};
	FILE *fp;
	fp=fopen("/home/thejas/Desktop/newTest","w");
	if(!fp)
	{
		printf("file open error\n");
		return -1;
	}
	fwrite(arr,8,1,fp);
	fwrite(brr,8,1,fp);
	fwrite(crr,8,1,fp);
	fclose(fp);
	//fn for calling delete the data
	delete("/home/thejas/Desktop/newTest",brr);
	return 1;
}
//function for deleting
int delete(char*src,unsigned char drr[8])
  {
	//create two streams
	FILE *fp,*tmp_fp;
	//temp array for comparing
	unsigned char temp[8]={0};
	//flag for found or not found
	bool found;
	fp=fopen(src,"r");
	tmp_fp=fopen("_tmp","w");
	if(!tmp_fp)
	{
		printf("tmp file open error\n");
		return -1;
	}
	if(!fp)
	{
		printf("file open error {delete()}\n");
		return -2;
	}
	//compare the data
	while(fread(temp,8,1,fp)!=NULL)
	{
		if(strncmp(&temp[0],&drr[0],8)==0)
			{
				printf("item found and deleting\n");
				found=1;
			}
		else
			//save data to temp file
			fwrite(temp,8,1,tmp_fp);
	}
	if(!found){
		printf("Item not found\n");
		return 0;
	}
	fclose(fp);
	fclose(tmp_fp);
	remove(src);
	//rename temp file
	rename("_tmp",src);
	return 0;
  }
