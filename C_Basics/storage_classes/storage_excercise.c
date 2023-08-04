//Automatic storage classes

#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
printf("Result=%d",a);
}

/*
Output:
Enter a number:10
Result=10
*/



//Static storage classes

#include<stdio.h>
int add(int);
int main()
 {
int a,b,c;
printf("Enter a number:");
scanf("%d",&a);
c=add(a);
printf("Result=%d",c);
printf("After function return=%d",add(a));
return 0;
 }

int add(int a)
{
int c;
static int b=20;
c=a+b;
b=a+b;
return c ;
}

/*
Output:
Enter a number:10
Result=30
After function return=40
*/


//extern storage classes

//main program (main.c)
#include<stdio.h>
int add(int);
int b=30;
int main()
 {
int a,c;
printf("Enter a number:");
scanf("%d",&a);
c=add(a);
printf("Result=%d",c);
return 0;
 }

//Sub-program   (add.c)
int add(int a)
{
int c;
extern int b;
c=a+b;
return c ;
}


/*
Output:
Enter a number:10
Result=40
*/


//Register storage classes

#include<stdio.h>
int main()
 {
register int i=1;
for( ;i<10;i++)
{
printf("%d\t",i);
}
return 0;
 }

/*
Output:
1	2	3	4	5	6	7	8	9
*/
