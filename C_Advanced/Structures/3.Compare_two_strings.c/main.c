#include "header.h"

float percentage(int arr[6])
{
	int sum=0;
	for(int i=0;i<6;i++)
		sum=sum+arr[i];
	return (float)sum/6;
}

int compare(struct student *s1,struct student *s2)
{
	if( (s1->ID)-(s2->ID)==0 && strcmp((s1->name),(s2->name))==0 && (s1->marks[0])-(s2->marks[0])==0 && (s1->marks[1])-(s2->marks[1])==0 && (s1->marks[2])-(s2->marks[2])==0 && (s1->marks[3])-(s2->marks[3])==0 && (s1->marks[4])-(s2->marks[4])==0 && (s1->marks[5])-(s2->marks[5])==0 && (s1->d)-(s2->d)==0 && (s1->m)-(s2->m)==0 && (s1->y)-(s2->y)==0 && (s1->gender)-(s2->gender)==0)
		return 1;
	else
		return 0;
}

int main()
{
	float p;
	printf("Enter student details:\n ");
	struct student s[2];
	for(int i=0;i<2;i++)
	{
		printf("Enter student ID: ");
		scanf("%d",&s[i].ID);
		printf("Enter student name: ");
		scanf("%s",s[i].name);
		printf("Enter student 6 subjects marks:\n");
		for(int j=0;j<6;j++)
			scanf("%d",&s[i].marks[j]);
		printf("Enter student DOB: ");
		scanf("%d%*c%d%*c%d",&s[i].d,&s[i].m,&s[i].y);
		p=percentage(s[i].marks);
		s[i].per=p;
		getchar();
		printf("Enter student Gender: ");
		scanf("%c",&s[i].gender);
		printf("\n");
	}
/*	for(int i=0;i<2;i++)
	{
		printf("DETAILS OF STUDENT - %d\n",i+1);
		printf("ID : %d\nName : %s\nMarks : %d %d %d %d %d %d\nDOB : %d-%d-%d\nPercentage : %.2f%%\nGender : %c\n",s[i].ID,s[i].name,s[i].marks[i],s[i].marks[i+1],s[i].marks[i+2],s[i].marks[i+3],s[i].marks[i+4],s[i].marks[i+5],s[i].d,s[i].m,s[i].y,s[i].per,s[i].gender);
		printf("\n");
	}*/
	compare(&s[0],&s[1])?printf("Both structures are equal\n"):printf("Both Structures are Not equal\n");

}
