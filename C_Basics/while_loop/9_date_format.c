#include<stdio.h>
int main()
{
int n,i=1;
printf("Input number of students:");
scanf("%d",&n);
while(i<=n)
{
int a,b,c;
printf("Input student %d date of birth:",i);
scanf("%d %*c %d %*c %d",&a,&b,&c);
switch(b)
{
case 1:
	if(a<=31)
	printf("date is: %d January %d\n",a,c);
	break;
case 2:
         ((c%400==0)||(c%4==0)) ?(a>=29?printf("date is: %d February %d\n",a,c):printf("Invalid Date Foromat\n")) :(a<=28?printf("date is: %d February %d\n",a,c):printf("Invalid Date Fromat\n"));
	break;
case 3:
        if(a<=31)
	printf("date is: %d March %d\n",a,c);
         break;
case 4:
        if(a<=30) 
	printf("date is: %d April %d\n",a,c);
         break;
case 5:
        if(a<=31) 
	printf("date is: %d May %d\n",a,c);
         break;
case 6:
        if(a<=30) 
	printf("date is: %d June %d\n",a,c);
         break;
case 7:
        if(a<=31) 
	printf("date is: %d July %d\n",a,c);
         break;
case 8:
        if(a<=31) 
	printf("date is: %d August %d\n",a,c);
         break;
case 9:
        if(a<=30) 
	printf("date is: %d Sepetember %d\n",a,c);
         break;
case 10:
        if(a<=30) 
	printf("date is: %d October %d\n",a,c);
         break;
case 11:
	if(a<=30)
         printf("date is: %d November %d\n",a,c);
         break;
case 12:
	if(a<=31)
         printf("date is: %d December %d\n",a,c);
         break;
default:
	printf("Invalid Month\n");
}
((c%400==0)||(c%4==0)) ?printf("this student is born in a leap year.\n"):printf("\n");
i++;
}
return 0;
}
