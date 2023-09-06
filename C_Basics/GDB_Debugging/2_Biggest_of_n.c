#include<stdio.h>
int main()
{
int r,n,i,b,num;
printf("Enter a range:");
scanf("%d",&r);
printf("Enter a number:");
scanf("%d",&n);
b=n;
for(i=1;i<r;i++)
{
printf("Enter a number:");
scanf("%d",&num);
if(b<num)
b=num;
}
printf("Biggest number is %d\n",b);
return 0;
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
Reading symbols from 2_Biggest_of_n...done.
(gdb) l
1	#include<stdio.h>
2	int main()
3	{
4	int r,n,i,b,num;
5	printf("Enter a range:");
6	scanf("%d",&r);
7	printf("Enter a number:");
8	scanf("%d",&n);
9	b=n;
10	for(i=1;i<r;i++)
(gdb) b 2
Breakpoint 1 at 0x722: file 2_Biggest_of_n.c, line 2.
(gdb) l
11	{
12	printf("Enter a number:");
13	scanf("%d",&num);
14	if(b<num)
15	b=num;
16	}
17	printf("Biggest number is %d\n",b);
18	return 0;
19	}
(gdb) b 14
Breakpoint 2 at 0x7bb: file 2_Biggest_of_n.c, line 14.
(gdb) l
Line number 20 out of range; 2_Biggest_of_n.c has 19 lines.
(gdb) b 17
Breakpoint 3 at 0x7d5: file 2_Biggest_of_n.c, line 17.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000000000000722 in main at 2_Biggest_of_n.c:2
2       breakpoint     keep y   0x00000000000007bb in main at 2_Biggest_of_n.c:14
3       breakpoint     keep y   0x00000000000007d5 in main at 2_Biggest_of_n.c:17
(gdb) r
Starting program: /home/km/KM_GITLAB/km50besd14/C_Basics/GDB_Debugging/2_Biggest_of_n 

Breakpoint 1, main () at 2_Biggest_of_n.c:3
3	{
(gdb) s
5	printf("Enter a range:");
(gdb) s
__printf (format=0x555555554894 "Enter a range:") at printf.c:28
28	printf.c: No such file or directory.
(gdb) p r
No symbol "r" in current context.
(gdb) s
32	in printf.c
(gdb) p r
No symbol "r" in current context.
(gdb) s
33	in printf.c
(gdb) c
Continuing.
Enter a range:5 
Enter a number:2
Enter a number:5

Breakpoint 2, main () at 2_Biggest_of_n.c:14
14	if(b<num)
(gdb) p b
$1 = 2
(gdb) s
15	b=num;
(gdb) s
10	for(i=1;i<r;i++)
(gdb) c
Continuing.
Enter a number:6

Breakpoint 2, main () at 2_Biggest_of_n.c:14
14	if(b<num)
(gdb) p b
$2 = 5
(gdb) c
Continuing.
Enter a number:1

Breakpoint 2, main () at 2_Biggest_of_n.c:14
14	if(b<num)
(gdb) p b
$3 = 6
(gdb) c
Continuing.
Enter a number:11

Breakpoint 2, main () at 2_Biggest_of_n.c:14
14	if(b<num)
(gdb) p b
$4 = 6
(gdb) p num
$5 = 11
(gdb) c
Continuing.

Breakpoint 3, main () at 2_Biggest_of_n.c:17
17	printf("Biggest number is %d\n",b);
(gdb) p b
$6 = 11
(gdb) s
__printf (format=0x5555555548b6 "Biggest number is %d\n") at printf.c:28
28	printf.c: No such file or directory.
(gdb) c
Continuing.
Biggest number is 11
[Inferior 1 (process 10111) exited normally]
(gdb) quit

*/
