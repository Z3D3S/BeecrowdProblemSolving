#include <stdio.h>

int main() {
	char V[500];
	int i;
	scanf("%[^\n]",V);
	for(i = 0;V[i] != '\0';++i);
	if(i <= 140){
		printf("TWEET\n");
	}
	else{
		printf("MUTE\n");
	}
	

	return 0;
}