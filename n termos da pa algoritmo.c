#include <stdio.h>

int main(void)
{
    printf("\tImprimir os n termos da PA\n");

    int k, r, n, t, a;

    printf("n-esimo termo:\n");
    scanf("%d", &n);

    printf("razao:\n");
    scanf("%d", &r);

    printf("primeiro termo:\n");
    scanf("%d", &t);

    a = t;

    printf("\n%d", a);

    	for (k = 1; k <= n; k = k + 1)
		{
			a = a + r;
			printf("\n%d", a);
		}

    return 0;
}

