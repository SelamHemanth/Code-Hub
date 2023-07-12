#include <stdio.h>

float sum(int n)
{
	float a,fact=1.0,sum=1.0;
	for (int i = 2; i <= n; ++i)
	{
		fact*= i;

		if (i % 2 == 0) {
			a = 1.0 / fact;
			sum -= a;
		} else {
			a = 1.0 / fact;
			sum += a;
		}
	}
	return sum;
}

int main() 
{
	float a;
	int n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	a=sum(n);
	printf("Resutl->%.2f\n",a);

	return 0;
}
