#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct linked_list
	{
		char name[25];
		float rank;
		char city[30];
		char num[10];
		struct linked_list*next;
	};
	 typedef struct linked_list node;
void menu();
void scan(char);
void view(node*list,int count);
void deletethis(node*,char nam[25],int count);
void edit(node*,char nam[25],int coun);
node*find(char nam[25],node*list,int);
bool cmp(char a[25],char b[25]);
node*head=NULL,*newIn,*p,*p1;
char nam[25],cit[30],nu[10];int count=0;
 /*main loop*/
int main()
{
	char  select1;
	menu();
	while(1)
	{	
		scanf("%c",&select1);
		scan(select1);	
	}
}//main end

/*functions*/

/*menu*/
void menu()
{
 system("cls");
 printf("\nMain Menu");
 printf("\n(a)Insert\n(b)View\n(c)Delete\n(d)Edit\n\n");
}
//scan()
void scan(char select)
{
	switch(select)
	{
		case 'a'://inserting
		{   
			system("cls");
			printf("\n\n");					
			printf("Name:");
			scanf("%s",nam);
			printf("City:");		
			scanf("%s",cit);
			printf("Phone:");
			scanf("%s",nu);
				newIn=(node*)malloc(sizeof(node));// insert at begining for first time
				strcpy(newIn->name,nam);
				strcpy(newIn->city,cit);
				strcpy(newIn->num,nu);
				newIn->next=head;
				head=newIn;
				printf("\n added!\n\nback to menu [m]"); 
				count++;
				
		break;
		}	
		case 'b':
			{
			system("cls");
			unsigned char subs;
			printf("(1)View all\n(2)Search\n");
			scanf("%d",&subs);
			if(subs==1)
			{   system("cls");
				view(head,count);
				printf("\nback to menu [m]\n");
			}
			else if(subs==2)
			{   
				printf("\nenter name in small letters\n");
				scanf("%s",nam);
				p1=find(nam,head,count);
				if(p1!=NULL)
				printf("\nName:%s\nCity:%s\nContact:%s\nMenu[m]",p1->name,p1->city,p1->num);				
				else
				printf("\nName not found :(\nMenu[m]");
				p1=NULL;								
			}
			break;
		}
		case 'm':
			menu();
		break;
		case 'c':
			system("cls");
			printf("\nenter the name to delete\n");
			scanf("%s",nam);
			deletethis(head,nam,count);			
		break;
		case 'd':
			system("cls");
			printf("enter name to be edited\n");
			scanf("%s",nam);
			edit(head,nam,count);
		break;
		default:	
		break;			 			
	}/*switch end*/
}/*scan fn end*/

/*view fn*/
void view(node*plist,int count)
{	system("cls");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
	for(;count!=0;plist=plist->next,count--)
	printf("\nName:%s\nCity:%s\nContact:%s\n",plist->name,plist->city,plist->num);
	//printf("\nName:%s\nCity:%s\nContact:%s\n",plist->name,plist->city,plist->num);
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ ");
}
node*find(char nam[25],node*list,int count)
{
	for(;count!=0;list=list->next,count--)
	{
		p=list;
		if(cmp(list->name,nam))		
		break;	
		else
		p=NULL;
	}
	return p;
	//printf("\nName:%s\nCity:%s\nContact:%s\n",p->name,p->city,p->num);	
}
/*cmp function*/
bool cmp(char a[25],char b[25])
{
	bool t;int i;
	for(i=0;a[i]!='\0'||b[i]!='\0';i++)
	{
		if(a[i]!=b[i]){
		t=false;
		break;	
		}
		else
		t=true;		
	}
	return t;	
}

/*deletethis function*/
void deletethis(node*list,char nam[25],int coun)
{   system("cls");
	node*p1=NULL,*p=NULL;
	for(;coun>0;list=list->next)
	{
		p=list;
		if(!cmp(list->name,nam))//finding item
		{
		p1=list;coun--;	
		}
		
		else{
			if(p1==NULL)// delete begining
			{
				head=p->next;
				free(p);
				printf("%s deleted!\nmenu[m]\n",nam);
				count--;
				break;
			}
			if(p->next==NULL)//delete last
			{
				p1->next=NULL;
				free(p);
				printf("%s deleted!\nmenu[m]\n",nam);
				count--;
				break;
			}
			else//insert middle
			{
				p1->next=p->next;
				free(p);
				printf("%s deleted!\nmenu[m]\n",nam);
				count--;
				break;
			}
	}}
	if(coun==0)//no item found
	printf("Not found!\ncheck spelling\nmenu[m]\n");
}

/*edit function*/
void edit(node*list,char nam[25],int coun)
{	system("cls");
	node*p;
	p=find(nam,list,coun);
	if(p!=NULL)
	{
		printf("Name:%s\nCity:%s\nPhone:%s\n",p->name,p->city,p->num);
		printf("enter new values\nName:");
		scanf("%s",p->name);
		printf("City:");
		scanf("%s",p->city);
		printf("Phone:");
		scanf("%s",p->num);
		printf("done!\nMenu[m]");
	}
	else
	printf("name not found:(\nMenu[m]");	
}
