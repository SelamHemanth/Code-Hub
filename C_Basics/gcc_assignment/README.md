##Date:3-8-2023;Topic: gcc assignment

sample.c: In function ‘main’:
sample.c:5:2: warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
  print("Hemanth\n");
  ^~~~~
  printf
/tmp/cc8ZBfXp.o: In function `main':
sample.c:(.text+0x11): undefined reference to `print'
collect2: error: ld returned 1 exit status
