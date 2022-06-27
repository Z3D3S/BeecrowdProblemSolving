#include <stdio.h>

int main() {
	int i;
	char String[1000];
	scanf("%[^\n]",String);
	for(i = 0;String[i] != '\0';++i){
		for(i = i;(String[i] >= '0'&&String[i] <= '9')||(String[i] >= 'a'&&String[i] <= 'z')||(String[i] >= 'A'&&String[i] <= 'Z');++i){
			printf("%c",String[i]);
		}
		printf("\n");
	}
	return 0;
}