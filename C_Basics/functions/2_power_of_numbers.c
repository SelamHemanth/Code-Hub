#include <stdio.h>

int power(int a, int n) 
{
	int result = 1;
	for (int i = 0; i < n; i++) 
	{
		result *= a;
	}
	return result;
}

int main() 
{
	int a, n;
	printf("Enter a and n values: ");
	scanf("%d %d", &a, &n);
	printf("%d\n", power(a, n));
	return 0;
}
