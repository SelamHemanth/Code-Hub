#Note down the differences between Call by Value and Call by Reference and when to use what.?




#Call by Value:-
-------------

*It is use to call the function by variable value.
*If call the function, it passes values as a argument and function creats seperate variables and stores the argument values.Manupulates the values and when you return the values the main function values are not change.
*The changes are done in with in the function only.
*By using call by value function returns only one value.



Example Code:-
------------

#include<stdio.h>

int swap(int,int);

int main()
{
int a,b;                           // A=10 and B=20
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
swap(a,b);
printf("\nmain program:\n");
printf("a=%d\n",a);			// A=10
printf("b=%d\n",b);			// B=20
}

int swap(int a,int b)
{
int c;
c=a;
a=b;
b=c;
printf("\nCall by value:\n");
printf("a=%d\n",a);			// A=20
printf("b=%d\n",b);			// B=10
}


#Call by Reference:-
------------------

*It is use to call the function by variable address.
*When the main function calls the sub-function, the base addresses of the arguments are passes to the functions.
*If any modifications are done in function. The main function varibale values also modified.
*The main advantage of call by reference is function returns multiple values.
*if the sub function have the one variable,the main function also access and assigne a values to them (if it is static variable).
  



Example Code:-
-------------

#include<stdio.h>

void swap(int *p1,int *p2);

int main()
{
int a,b;				// A=10   and   B=20
printf("Enter a value:");
scanf("%d",&a);
printf("Enter b value:");
scanf("%d",&b);
swap(&a,&b);				// in funtion calling address of the base varibales
printf("\nmain program:\n");
printf("a=%d\n",a);			// A=20
printf("b=%d\n",b);			// B=10
}

void swap(int *a,int *b)
{
int c;
c=*a;
*a=*b;
*b=c;
printf("\nCall by reference:\n");
printf("a=%d\n",*a);			// A=20
printf("b=%d\n",*b);			// B=10
}
          
