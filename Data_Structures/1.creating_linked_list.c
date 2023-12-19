#include<stdio.h>
#include<stdlib.h>

typedef struct student 
{
	int ID;
	char name[15];
	struct student *next;
}st;

char ch;
st *head,*new,*last;

st creating(void)
{
static int n=1;
	new=(st *)malloc(sizeof(st));
	printf("Enter ID for student %d: ",n);
	scanf("%d",&new->ID);
	printf("Enter Name for student %d: ",n);
	getchar();
	scanf("%14[^\n]s",new->name);
	new->next=0;
	if(head==0)
		head=new;
	else
		last->next=new;
	last=new;
n++;
}

int printing(st *temp)
{
	static int n=1;
	if(temp==NULL)
	{
		printf("Pointer is Invalid\n");
		return 0;
	}
	while(temp)
	{
		printf("Details of student-%d\n",n);
		printf("ID   -> %d\n",temp->ID);
		printf("Name -> %s\n",temp->name);
		temp=temp->next;
		n++;
	}
	printf("Done!\n");
}

int main()
{
	printf("Creating Linked List");
	printf("\nEnter y/n to create linked list: ");
	scanf("%c",&ch);
	while(ch!='n')
	{
		creating();
		printf("\nDo you want to continue? (y/n): \n");
		getchar();
		scanf("%c",&ch);
	}
	printf("\nPrinting data\n");
	printing(head);
}
