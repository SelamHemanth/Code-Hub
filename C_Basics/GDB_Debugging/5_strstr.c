#include<stdio.h>
int character( char str[], char);

int main()
{
int a;
char str[50],ch,ch1;
printf("Enter a string: ");
scanf("%s",str);
getchar();
printf("Enter a character :");
scanf("%c",&ch);
a=character(str,ch);
printf("Enter replacing character: ");
getchar();
scanf("%c",&ch1);
str[a]=ch1;
printf("\n%s\n",str);
}

int character( char str[], char ch)
{
for(int i=0;str[i]!='\0';i++)
{
if(ch==str[i])
return i;
}
return -1;
}

//GNU_Debugging:-
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
Reading symbols from 5_strstr...done.
(gdb) l
1	#include<stdio.h>
2	int character( char str[], char);
3	
4	int main()
5	{
6	int a;
7	char str[50],ch,ch1;
8	printf("Enter a string: ");
9	scanf("%s",str);
10	getchar();
(gdb) l
11	printf("Enter a character :");
12	scanf("%c",&ch);
13	a=character(str,ch);
14	printf("Enter replacing character: ");
15	getchar();
16	scanf("%c",&ch1);
17	str[a]=ch1;
18	printf("\n%s\n",str);
19	}
20	
(gdb) l
21	int character( char str[], char ch)
22	{
23	for(int i=0;str[i]!='\0';i++)
24	{
25	if(ch==str[i])
26	return i;
27	}
28	return -1;
29	}
30	
(gdb) b 4
Breakpoint 1 at 0x772: file 5_strstr.c, line 4.
(gdb) b 7
Breakpoint 2 at 0x781: file 5_strstr.c, line 7.
(gdb) b 9
Breakpoint 3 at 0x792: file 5_strstr.c, line 9.
(gdb) b 13
Breakpoint 4 at 0x7d8: file 5_strstr.c, line 13.
(gdb) b 18
Breakpoint 5 at 0x82b: file 5_strstr.c, line 18.
(gdb) b 23
Breakpoint 6 at 0x86b: file 5_strstr.c, line 23.
(gdb) r
`/home/km/KM_GITLAB/km50besd14/C_Basics/GDB_Debugging/5_strstr' has changed; re-reading symbols.
Starting program: /home/km/KM_GITLAB/km50besd14/C_Basics/GDB_Debugging/5_strstr 

Breakpoint 1, main () at 5_strstr.c:5
5	{
(gdb) s

Breakpoint 2, main () at 5_strstr.c:8
8	printf("Enter a string: ");
(gdb) s
__printf (format=0x555555554934 "Enter a string: ") at printf.c:28
28	printf.c: No such file or directory.
(gdb) c
Continuing.

Breakpoint 3, main () at 5_strstr.c:9
9	scanf("%s",str);
(gdb) s
__isoc99_scanf (format=0x555555554945 "%s") at isoc99_scanf.c:27
27	isoc99_scanf.c: No such file or directory.
(gdb) c
Continuing.
Enter a string: Hemanth
Enter a character :m

Breakpoint 4, main () at 5_strstr.c:13
13	a=character(str,ch);
(gdb) p a
$1 = 0
(gdb) c
Continuing.

Breakpoint 6, character (str=0x7fffffffdde0 "Hemanth", ch=109 'm') at 5_strstr.c:23
23	for(int i=0;str[i]!='\0';i++)
(gdb) watch i
Hardware watchpoint 7: i
(gdb) c
Continuing.

Hardware watchpoint 7: i

Old value = 0
New value = 1
0x0000555555554892 in character (str=0x7fffffffdde0 "Hemanth", ch=109 'm') at 5_strstr.c:23
23	for(int i=0;str[i]!='\0';i++)
(gdb) c
Continuing.

Hardware watchpoint 7: i

Old value = 1
New value = 2
0x0000555555554892 in character (str=0x7fffffffdde0 "Hemanth", ch=109 'm') at 5_strstr.c:23
23	for(int i=0;str[i]!='\0';i++)
(gdb) c
Continuing.

Watchpoint 7 deleted because the program has left the block in
which its expression is valid.
0x00005555555547ed in main () at 5_strstr.c:13
13	a=character(str,ch);
(gdb) c
Continuing.
Enter replacing character: H   

Breakpoint 5, main () at 5_strstr.c:18
18	printf("\n%s\n",str);
(gdb) c
Continuing.

HeHanth
[Inferior 1 (process 10997) exited normally]
(gdb) disass
No frame selected.
(gdb) quit
*/
