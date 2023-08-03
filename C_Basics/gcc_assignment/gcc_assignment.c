//Preprocessor Error

#inc<stdio.h>

int main()
{
printf("Hemanth\n");
}

/*command:   >> gcc -E gcc_assignment.c -o gcc_assignment.i
Output:
sample.c:1:3: error: invalid preprocessing directive #inc
  #inc<stdio.h>
   ^~~

*/


//Compilation Error

 #include<stdio.h>
 
 int main()
 {
 printf("Hemanth\n")
 }

/*Command:    >>gcc -S gcc_assingnmt.c -o gcc_assignment.s
Output:
sample.c: In function ‘main’:
sample.c:6:2: error: expected ‘;’ before ‘}’ token
  }
  ^
*/


//Linker Error

#include<stdio.h>

int main()
{
print("Hemanth\n");
}

/*Command:	>>gcc gcc_assignment.c -o gcc_assignment.out
Output:
sample.c: In function ‘main’:
sample.c:5:2: warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
  print("Hemanth\n");
  ^~~~~
  printf
/tmp/cc8ZBfXp.o: In function `main':
sample.c:(.text+0x11): undefined reference to `print'
collect2: error: ld returned 1 exit status*/
