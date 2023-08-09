#include<stdio.h>

int NoOfDaysinMonth(int m,int y);
void CalculateNetSalary(int total,int lop,int m,int y);

int total,lop,m,y;
extern int salary;

int main()
{
	printf("Total salary of the employee: ");
	scanf("%d",&total);
if(total>0)
{
	printf("Month: ");
	scanf("%d",&m);
	if(m>0 && m<=12)
	{
		printf("Year: ");
		scanf("%d",&y);
		if(y>=1000 && y<=9999)
		{
			printf("Number of LOPs: ");
			scanf("%d",&lop);
			if(lop>0 && lop <=NoOfDaysinMonth(m,y))
			{
				CalculateNetSalary(total,lop,m,y);
			
				printf("Net payable salary is: %d /-\n",salary);
			}
			else
				printf("Invalid LOPs, Try again\n");
		}
		else
			printf("InValid Year, Try again\n");
	}
	else 
		printf("Invalid months, Try again\n");
}
else
printf("Invalid amount, Try again\n");

}
