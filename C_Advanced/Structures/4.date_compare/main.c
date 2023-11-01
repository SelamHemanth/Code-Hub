#include "header.h"

float percentage(int arr[6])
{
	int sum=0;
	for(int i=0;i<6;i++)
		sum=sum+arr[i];
	return (float)sum/6;
}

int older(int d1,int d2,int m1,int m2,int y1,int y2)
{
	if(y1<y2)
		return 1;
	else if(y1>y2)
		return 0;
	else if(y1==y2)
	{
		if(m2>m1)
			return 1;
		else if(m2<m1)
			return 0;
		else if(m2==m1)
		{
			if(d1<d2)
				return 1;
			else if(d1>d2)
				return 0;
		}
	}
}


int main()
{
	int n,d=0,m=0,y=9999,mem;
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
		printf("\n");
	}
	for(int i=0;i<n;i++)
	{
		if(older(s[i].d,d,s[i].m,m,s[i].y,y)==1)
		{
			mem=i;
			d=s[i].d;
			m=s[i].m;
			y=s[i].y;
		}
	}
	printf("DETAILS OF OLDER STUDENT:\n");
	printf("ID : %d\nName : %s\nMarks : %d %d %d %d %d %d\nDOB : %d-%d-%d\nPercentage : %.2f%%\nGender : %c\n",s[mem].ID,s[mem].name,s[mem].marks[0],s[mem].marks[1],s[mem].marks[2],s[mem].marks[3],s[mem].marks[4],s[mem].marks[5],s[mem].d,s[mem].m,s[mem].y,s[mem].per,s[mem].gender);

}
