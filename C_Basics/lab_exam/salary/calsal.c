int totaldays,salary;

int NoOfDaysinMonth(int m, int y);

void CalculateNetSalary(int total,int lop,int m,int y)
{
totaldays=NoOfDaysinMonth(m,y);
salary=total-lop*(float)total/totaldays;
}
