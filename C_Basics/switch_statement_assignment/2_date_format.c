#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter DD-mm-yy :");
scanf("%d %*c %d %*c %d",&a,&b,&c);
if(a==1 || a==21 || a==31)
printf("%dst",a);
else if(a==2 || a==22)
printf("%dnd",a);
else if(a==3 || a==23)
printf("%drd",a);
else
printf("%dth",a);
switch(b)
{
case 1:
	if(a<=31)
	printf(" January %d\n",c);
	break;
case 2:
         ((c%400==0)||(c%4==0)) ?(a>=29?printf(" February %d\n",c):printf("Invalid Date F    romat\n")) :(a<=28?printf(" February %d\n",c):printf("Invalid Date Fromat\n"));
	break;
case 3:
        if(a<=31)
	printf(" March %d\n",c);
         break;
case 4:
        if(a<=30) 
	printf(" April %d\n",c);
         break;
case 5:
        if(a<=31) 
	printf(" May %d\n",c);
         break;
case 6:
        if(a<=30) 
	printf(" June %d\n",c);
         break;
case 7:
        if(a<=31) 
	printf(" July %d\n",c);
         break;
case 8:
        if(a<=31) 
	printf(" August %d\n",c);
         break;
case 9:
        if(a<=30) 
	printf(" Sepetember %d\n",c);
         break;
case 10:
        if(a<=30) 
	printf(" October %d\n",c);
         break;
case 11:
	if(a<=30)
         printf(" November %d\n",c);
         break;
case 12:
	if(a<=31)
         printf(" December %d\n",c);
         break;
default:
	printf("Invalid Month\n");
}
return 0;
}
