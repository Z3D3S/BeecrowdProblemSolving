#include <stdio.h>

int main() {
	int X1,X2,X3;
	scanf("%d",&X1);
	scanf("%d",&X2);
	scanf("%d",&X3);
	printf ("A = %d, B = %d, C = %d\n", X1, X2, X3);
	printf ("A = %10d, B = %10d, C = %10d\n", X1, X2, X3);
	printf ("A = %010d, B = %010d, C = %010d\n", X1, X2, X3);
	printf ("A = %-10d, B = %-10d, C = %-10d\n", X1, X2, X3);
	return 0;
}