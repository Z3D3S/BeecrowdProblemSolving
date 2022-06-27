#include <stdio.h>

int main() {
	char X1,X2,X3;
	scanf("%c %c %c",&X1,&X2,&X3);
	printf("A = %c, B = %c, C = %c\n",X1,X2,X3);
	printf("A = %c, B = %c, C = %c\n",X2,X3,X1);
	printf("A = %c, B = %c, C = %c\n",X3,X1,X2);
	return 0;
}