#include <stdio.h>

int main() {
	int i;
	char String[200];
	scanf("%[^\n]",String);
	for(i =0; String[i] != '\0';++i){
		if(String[i] == ','){
			printf("\n");
		}
		else{
			printf("%c",String[i]);
		}
	}
	printf("\n");
	return 0;
}