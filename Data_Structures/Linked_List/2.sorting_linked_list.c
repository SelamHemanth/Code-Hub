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

void sort(void) 
{
	st * test=NULL;

	if (head == NULL || head->ID >= new->ID) 
	{
		new->next=head;
		head = new;
	} 
	else
	{
		test = head;
		while (test->next != NULL && test->next->ID < new->ID)
		{
			test= test->next;
		}
		new->next = test->next;
		test->next = new;
	}
}

void creating(void)
{
	static int n=1;
	new=(st *)malloc(sizeof(st));
	printf("Enter ID for student %d: ",n);
	scanf("%d",&new->ID);
	printf("Enter Name for student %d: ",n);
	getchar();
	scanf("%14[^\n]s",new->name);
	new->next=0;
	sort();
	n++;
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
	while(1)
	{
		printf("\n\t\t👈(⌒ MËṆŰ⌒ )👉\n");
		printf("1️⃣ .Create a node\n");
		printf("2️⃣ .Print linked list\n");
		printf("3️⃣ .Exit\n");
		printf("\nChoose an Option: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("Creating Linked List\n");
				printf("\nDo you want to continue? (y/n): \n");
				getchar();
				scanf("%c",&ch);
				while(ch!='n')
				{
					creating();
					printf("\nDo you want to continue? (y/n): \n");
					getchar();
					scanf("%c",&ch);
				}
				break;
			case 2: printf("Printing data\n");
				printing(head);
				break;
			case 3: free_nodes(head);
				printf("\nThank you..!\n");
				return 0;
			default:printf("Wrong Choose..\nTry Again...!\n");
		}
	}

}
