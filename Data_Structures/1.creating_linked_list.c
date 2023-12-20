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

int check_position(int n)
{
	int count=0;
	st * temp=head;
	while(temp)
	{
		temp=temp->next;
		count++;
	}
	if(count == n)
		return 1;
	else
		return 0;
}

int check_key(int n)
{
	st *temp=head;
	while(temp)
	{
		if(temp->ID == n)
			return 1;
		else
			temp=temp->next;
	}
return 0;
}

void free_nodes(st *temp)
{
	st * reserve=NULL;
	while(temp->next!=NULL)
	{
		reserve=temp->next;
		free(temp);
		temp=reserve;
	}
	free(temp);
}

void delete_with_key(st *temp,int key)
{
	st *delete=NULL;
	if(key==temp->ID)
	{
		delete=temp;
		head=temp->next;
		free(delete);
	}
	else
	{
		while(temp->ID!=key)
		{
			delete=temp;
			temp=temp->next;
		}
		delete->next=temp->next;
		free(temp);
		printf("Key %d is deleted..\n",key);
	}
}


void delete_with_position(st *temp,int n)
{
	int i=1;
	st *delete=NULL;
	if(n==1)
	{
		delete=temp;
		head=temp->next;
		free(delete);
	}
	else
	{
		while(i<n-1)
		{
			if(temp)
			{
				temp=temp->next;
				i++;
			}
		}
		delete=temp->next;
		temp->next=delete->next;
		free(delete);
	}
	printf("Position %d is deleted..\n",n);
}

void insert_after_key(st *temp,int key)
{
	while(temp->ID!=key)
	{
		temp=temp->next;
	}
	st *new=(st *)malloc(sizeof(st));
	printf("Enter ID for student : ");
	scanf("%d",&new->ID);
	printf("Enter Name for student: ");
	getchar();
	scanf("%14[^\n]s",new->name);
	new->next=0;
	if(temp->next == 0)
		temp->next=new;
	else
		new->next=temp->next;
	temp->next=new;
}


void insert_before_key(st *temp,int key)
{
	if(key==temp->ID)
	{
		st *new=(st *)malloc(sizeof(st));
		printf("Enter ID for student : ");
		scanf("%d",&new->ID);
		printf("Enter Name for student: ");
		getchar();
		scanf("%14[^\n]s",new->name);
		new->next=temp;
		head=new;
	}
	else
	{
		st *s=temp->next;
		while(s->ID!=key)
		{
			temp=temp->next;
			s=s->next;
		}
		st *new=(st *)malloc(sizeof(st));
		printf("Enter ID for student : ");
		scanf("%d",&new->ID);
		printf("Enter Name for student: ");
		getchar();
		scanf("%14[^\n]s",new->name);
		new->next=0;
		new->next=temp->next;
		temp->next=new;
	}
}

st * insert_with_position(st *temp,int n)
{
	int i=1;
	if(n==1)
	{
		st *new=(st *)malloc(sizeof(st));
		printf("Enter ID for student : ");
		scanf("%d",&new->ID);
		printf("Enter Name for student: ");
		getchar();
		scanf("%14[^\n]s",new->name);
		new->next=temp;
		head=new;
	}
	else{
		while(i<n-1)
		{
			if(temp)
			{
				temp=temp->next;
				i++;
			}
			else
			{
				printf("\nInvalid Position\n\nTry Again...!\n");
				return 0;
			}
		}
		st *new=(st *)malloc(sizeof(st));
		printf("Enter ID for student : ");
		scanf("%d",&new->ID);
		printf("Enter Name for student: ");
		getchar();
		scanf("%14[^\n]s",new->name);
		new->next=0;
		new->next=temp->next;
		temp->next=new;
	}
}

st * creating(void)
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
	return head;
}

int printing(st *temp)
{
	int n=1;
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
	int n;
	st *travesal;
	while(1)
	{
		printf("\n1.Create\n");
		printf("2.Traverse\n");
		printf("3.Insert with position\n");
		printf("4.Insert after key\n");
		printf("5.Insert before key\n");
		printf("6.Delete with position\n");
		printf("7.Delete with key\n");
		printf("8.Exit\n\n");
		printf("Choose option: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("Creating Linked List\n"); 
				printf("\nDo you want to continue? (y/n): \n");
				getchar();
				scanf("%c",&ch);
				while(ch!='n')
				{
					head=creating();
					printf("\nDo you want to continue? (y/n): \n");
					getchar();
					scanf("%c",&ch);
				}
				break;
			case 2: printf("Printing data\n");
				printing(head);
				break;
			case 3: printf("Insert with position\n");
				printf("Enter position: ");
				scanf("%d",&n);
				insert_with_position(head,n);
				break;
			case 4: printf("Insert After Key\n");
				printf("Enter Key: ");
				scanf("%d",&n);
				if(check_key(n))
				insert_after_key(head,n);
				else
				printf("Invalid Key\nTry Again...!\n\n");
				break;
			case 5: printf("Insert Before Key\n");
				printf("Enter Key: ");
				scanf("%d",&n);
				if(check_key(n))
				insert_before_key(head,n);
				else
				printf("Invalid Key\nTry Again...!\n\n");
				break;
			case 6: printf("Delete with position\n");
				printf("Enter Position: ");
				scanf("%d",&n);
				if(check_position(n))
				delete_with_position(head,n);
				else
				printf("Invalid Position\nTry Again...!\n\n");
				break;
			case 7: printf("Delete with key\n");
				printf("Enter Key: ");
				scanf("%d",&n);
				if(check_key(n))
				delete_with_key(head,n);
				else
				printf("Invalid Key\nTry Again...!\n\n");
				break;
			case 8: free_nodes(head);
				printf("\nThank you..!\n");
				return 0;
			default:printf("Wrong Choose..\nTry Again...!\n");
		}
	}
}
