#include<stdio.h>

int swapcbr(int *p1,int *p2);
int swapcbv(int,int);

int main()
{
	int a,b;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	swapcbr(&a,&b);
	printf("\nmain program:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	swapcbv(a,b);
	printf("\nmain program:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}

int swapcbr(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
	printf("\nCall by reference:\n");
	printf("a=%d\n",*a);
	printf("b=%d\n",*b);
}
int swapcbv(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("\nCall by value:\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}

//GDB_Debugging:-
/*
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from 3_Swap_two_numbers...done.
(gdb) l
1	#include<stdio.h>
2	
3	int swapcbr(int *p1,int *p2);
4	int swapcbv(int,int);
5	
6	int main()
7	{
8		int a,b;
9		printf("Enter a value:");
10		scanf("%d",&a);
(gdb) d 6
No breakpoint number 6.
(gdb) b 6
Breakpoint 1 at 0x772: file 3_Swap_two_numbers.c, line 6.
(gdb) b 10
Breakpoint 2 at 0x792: file 3_Swap_two_numbers.c, line 10.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000000000000772 in main at 3_Swap_two_numbers.c:6
2       breakpoint     keep y   0x0000000000000792 in main at 3_Swap_two_numbers.c:10
(gdb) l
11		printf("Enter b value:");
12		scanf("%d",&b);
13		swapcbr(&a,&b);
14		printf("\nmain program:\n");
15		printf("a=%d\n",a);
16		printf("b=%d\n",b);
17		swapcbv(a,b);
18		printf("\nmain program:\n");
19		printf("a=%d\n",a);
20		printf("b=%d\n",b);
(gdb) b 13
Breakpoint 3 at 0x7d3: file 3_Swap_two_numbers.c, line 13.
(gdb) b 17
Breakpoint 4 at 0x81e: file 3_Swap_two_numbers.c, line 17.
(gdb) l
21	}
22	
23	int swapcbr(int *a,int *b)
24	{
25		int c;
26		c=*a;
27		*a=*b;
28		*b=c;
29		printf("\nCall by reference:\n");
30		printf("a=%d\n",*a);
(gdb) l
31		printf("b=%d\n",*b);
32	}
33	int swapcbv(int a,int b)
34	{
35		int c;
36		c=a;
37		a=b;
38		b=c;
39		printf("\nCall by value:\n");
40		printf("a=%d\n",a);
(gdb) p a
No symbol "a" in current context.
(gdb) c
The program is not being run.
(gdb) r
Starting program: /home/km/KM_GITLAB/km50besd14/C_Basics/GDB_Debugging/3_Swap_two_numbers 

Breakpoint 1, main () at 3_Swap_two_numbers.c:7
7	{
(gdb) bt full
#0  main () at 3_Swap_two_numbers.c:7
        a = -8400
        b = 32767
(gdb) s
9		printf("Enter a value:");
(gdb) s
__printf (format=0x5555555549d4 "Enter a value:") at printf.c:28
28	printf.c: No such file or directory.
(gdb) s
32	in printf.c
(gdb) s
33	in printf.c
(gdb) c
Continuing.

Breakpoint 2, main () at 3_Swap_two_numbers.c:10
10		scanf("%d",&a);
(gdb) s
__isoc99_scanf (format=0x5555555549e3 "%d") at isoc99_scanf.c:27
27	isoc99_scanf.c: No such file or directory.
(gdb) c
Continuing.
Enter a value:10
Enter b value:20

Breakpoint 3, main () at 3_Swap_two_numbers.c:13
13		swapcbr(&a,&b);
(gdb) c
Continuing.

Call by reference:
a=20
b=10

main program:
a=20
b=10

Breakpoint 4, main () at 3_Swap_two_numbers.c:17
17		swapcbv(a,b);
(gdb) c
Continuing.

Call by value:
a=10
b=20

main program:
a=20
b=10
[Inferior 1 (process 10264) exited normally]
(gdb) s
The program is not being run.
(gdb) bt full
No stack.
(gdb) quit

*/
