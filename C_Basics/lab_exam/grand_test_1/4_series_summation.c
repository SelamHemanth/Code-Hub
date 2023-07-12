#include <stdio.h>

int main() {
    int n, i;
    float a, sum = 1.0, fact=1.0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; ++i) {
        fact*= i;

        if (i % 2 == 0) {
            a = 1.0 / fact;
            sum -= a;
        } else {
            a = 1.0 / fact;
            sum += a;
        }
    }

    printf("Resutl->%.2f\n",sum);

    return 0;
}
