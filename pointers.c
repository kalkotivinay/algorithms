
#include <stdio.h>

int main()
{

	int k = 100;
	int *p1 = k;
	int **ipp = &p1;

	printf("%d\n", *ipp);
	return 0;
}
