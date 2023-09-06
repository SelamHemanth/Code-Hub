int Change_Value = 0;

  int Sum_it (int, int);
  void error_with_code (void);

  /******************************************/
  /*                                           */
  /* main () - main routine                    */
  /*                                           */
 /******************************************/

 int main (void)
 {
    int Arg_1 = 20, Arg_2 = 40;
    int i;


     for (i = 0; i < 10; i++) {
        if (Arg_1 > Arg_2)
             Arg_2 = Sum_it (Arg_1, Arg_2);
        else
            Arg_1 = Sum_it (Arg_1, Arg_2);
     }

     error_with_code ();

 }   /* End of main() */


 /**********************************************************/
 /*                                                        */
 /* Sum_it() - This routine adds two numbers and returns the
 result */
 /*                                                        */
 /**********************************************************/
 int Sum_it (int a, int b)

 {
     return a+b;

 } /* End of Sum_it */



 /**********************************************************/
 /*                                                        */
 /* error_with_code() - This routine has an intended bug.
 */
 /*
 */
/***************************************************************
*/
 void error_with_code(void)
 {
    int divide_value;
    int result;

    divide_value = Change_Value;
    result = 10 / divide_value;
    return ;

 } /* End of error_with_code() */


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
Reading symbols from 1_gdb_sample...done.
(gdb) l
warning: Source file is more recent than executable.
1	int Change_Value = 0;
2	
3	  int Sum_it (int, int);
4	  void error_with_code (void);
5	
6	  /******************************************/
7	  /*                                           */
8	  /* main () - main routine                    */
9	  /*                                           */
10	 /******************************************/
(gdb) l
11	
12	 int main (void)
13	 {
14	    int Arg_1 = 20, Arg_2 = 40;
15	    int i;
16	
17	
18	     for (i = 0; i < 10; i++) {
19	        if (Arg_1 > Arg_2)
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) b 12
Breakpoint 1 at 0x602: file 1_gdb_sample.c, line 12.
(gdb) l
21	        else
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
23	     }
24	
25	     error_with_code ();
26	
27	 }   /* End of main() */
28	
29	
30	 /**********************************************************/
(gdb) l
31	 /*                                                        */
32	 /* Sum_it() - This routine adds two numbers and returns the
33	 result */
34	 /*                                                        */
35	 /**********************************************************/
36	 int Sum_it (int a, int b)
37	
38	 {
39	     return a+b;
40	
(gdb) b 20
Breakpoint 2 at 0x621: file 1_gdb_sample.c, line 20.
(gdb) b 25
Breakpoint 3 at 0x651: file 1_gdb_sample.c, line 25.
(gdb) b i
Function "i" not defined.
Make breakpoint pending on future shared library load? (y or [n]) i b
Please answer y or [n].
Make breakpoint pending on future shared library load? (y or [n]) y
Breakpoint 4 (i) pending.
(gdb) i b
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x0000000000000602 in main at 1_gdb_sample.c:12
2       breakpoint     keep y   0x0000000000000621 in main at 1_gdb_sample.c:20
3       breakpoint     keep y   0x0000000000000651 in main at 1_gdb_sample.c:25
4       breakpoint     keep y   <PENDING>          i
(gdb) i r
The program has no registers now.
(gdb) r
Starting program: /home/km/KM_GITLAB/km50besd14/C_Basics/GDB_Debugging/1_gdb_sample 

Breakpoint 1, main () at 1_gdb_sample.c:14
14	    int Arg_1 = 20, Arg_2 = 40;
(gdb) i r
rax            0x5555555545fa	93824992232954
rbx            0x0	0
rcx            0x555555554690	93824992233104
rdx            0x7fffffffdf58	140737488346968
rsi            0x7fffffffdf48	140737488346952
rdi            0x1	1
rbp            0x7fffffffde60	0x7fffffffde60
rsp            0x7fffffffde50	0x7fffffffde50
r8             0x7ffff7dced80	140737351839104
r9             0x7ffff7dced80	140737351839104
r10            0x0	0
r11            0x0	0
r12            0x5555555544f0	93824992232688
r13            0x7fffffffdf40	140737488346944
r14            0x0	0
r15            0x0	0
rip            0x555555554602	0x555555554602 <main+8>
eflags         0x206	[ PF IF ]
cs             0x33	51
ss             0x2b	43
ds             0x0	0
es             0x0	0
fs             0x0	0
gs             0x0	0
(gdb) bt
#0  main () at 1_gdb_sample.c:14
(gdb) bt full
#0  main () at 1_gdb_sample.c:14
        Arg_1 = 32767
        Arg_2 = 0
        i = 0
(gdb) s
18	     for (i = 0; i < 10; i++) {
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) p Arg_1
$1 = 20
(gdb) s
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
(gdb) s
Sum_it (a=20, b=40) at 1_gdb_sample.c:39
39	     return a+b;
(gdb) s i
No symbol "i" in current context.
(gdb) i s
#0  Sum_it (a=20, b=40) at 1_gdb_sample.c:39
#1  0x0000555555554644 in main () at 1_gdb_sample.c:22
(gdb) s
41	 } /* End of Sum_it */
(gdb) c
Continuing.

Breakpoint 2, main () at 1_gdb_sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) p Arg_2
$2 = 40
(gdb) s
Sum_it (a=60, b=40) at 1_gdb_sample.c:39
39	     return a+b;
(gdb) s
41	 } /* End of Sum_it */
(gdb) s
main () at 1_gdb_sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) c
Continuing.

Breakpoint 2, main () at 1_gdb_sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) s
Sum_it (a=160, b=100) at 1_gdb_sample.c:39
39	     return a+b;
(gdb) s
41	 } /* End of Sum_it */
(gdb) s
main () at 1_gdb_sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) c
Continuing.

Breakpoint 2, main () at 1_gdb_sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) p Arg_2
$3 = 260
(gdb) s
Sum_it (a=420, b=260) at 1_gdb_sample.c:39
39	     return a+b;
(gdb) s
41	 } /* End of Sum_it */
(gdb) s
main () at 1_gdb_sample.c:18
18	     for (i = 0; i < 10; i++) {
(gdb) s
19	        if (Arg_1 > Arg_2)
(gdb) p Arg_1
$4 = 420
(gdb) s
22	            Arg_1 = Sum_it (Arg_1, Arg_2);
(gdb) c
Continuing.

Breakpoint 2, main () at 1_gdb_sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) c
Continuing.

Breakpoint 2, main () at 1_gdb_sample.c:20
20	             Arg_2 = Sum_it (Arg_1, Arg_2);
(gdb) p Arg_2
$5 = 1780
(gdb) c
Continuing.

Breakpoint 3, main () at 1_gdb_sample.c:25
25	     error_with_code ();
(gdb) s
error_with_code () at 1_gdb_sample.c:58
58	    divide_value = Change_Value;
(gdb) p change_value
No symbol "change_value" in current context.
(gdb) p Chnage_Value
No symbol "Chnage_Value" in current context.
(gdb) p Change_Value
$6 = 0
(gdb) p divide_value
$7 = 1780
(gdb) s
59	    result = 10 / divide_value;
(gdb) p divide_value
$8 = 0
(gdb) p deivide_value=20
No symbol "deivide_value" in current context.
(gdb) s

Program received signal SIGFPE, Arithmetic exception.
0x0000555555554684 in error_with_code () at 1_gdb_sample.c:59
59	    result = 10 / divide_value;
(gdb) p divide_value=20
$9 = 20
(gdb) s

Program terminated with signal SIGFPE, Arithmetic exception.
The program no longer exists.
(gdb) p result
$10 = '\000' <repeats 113 times>
(gdb) p divide_value
No symbol "divide_value" in current context.
(gdb) s
The program is not being run.
(gdb) c
The program is not being run.
(gdb) quit*/
