#include <stdio.h>

int main(){
	int i,X;
	char String[35] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
	scanf("%d",&X);
	for (i = 0;String[i] != '\0'&&i < X ; ++i)
	{
		printf("%c",String[i]);
	}
	printf("\n");

	return 0;
}