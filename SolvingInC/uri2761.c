#include <stdio.h>

int main() {
	int X1;
	float X2;
	char X3;
	char String[60];
	scanf("%d %f %c %[^\n]",&X1,&X2,&X3,String);
	
	printf("%d%f%c%s\n",X1,X2,X3,String);
	printf("%d\t%f\t%c\t%s\n",X1,X2,X3,String);
	printf("%10d%10f%10c%10s\n",X1,X2,X3,String);
	
	return 0;
}