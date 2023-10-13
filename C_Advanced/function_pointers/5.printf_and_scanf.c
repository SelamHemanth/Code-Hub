#include <stdio.h>

int main() 
{
	int num;
	int (*p[2])(const char *,...)={printf,scanf};
	p[0]("Enter an integer: ");
	p[1]("%d", &num);
	p[0]("You entered: %d\n", num);
	return 0;
}

