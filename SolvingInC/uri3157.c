#include <stdio.h>
#include <string.h>

int main() {
	char String[300];
	scanf("%[^\n]",String);
	strcpy(String,"Nao se refuta ciencia com opiniao");
	printf("%s\n",String);
	return 0;
}