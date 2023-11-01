#include "header.h"

float percentage(int arr[6])
{
	int sum=0;
	for(int i=0;i<6;i++)
		sum=sum+arr[i];
	return (float)sum/6;
}

int main()
{
	int n;
	float p;
	printf("Enter number of student: ");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
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
		if((s[i].gender=='m') || (s[i].gender=='M'))
		male++;
		else
		female++;
		printf("\n");
	}
	printf("\n\n");
	printf("COUNT:\nMales->%d\nFemales->%d\n",male,female);

}
