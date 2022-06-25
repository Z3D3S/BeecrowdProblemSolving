#include <stdio.h>

int main() {
	int i,q = 0;
	char Stringzin[102];
	scanf("%[^\n]",Stringzin);
	for(i=0;Stringzin[i] != '\0';++i){
		if(Stringzin[i] == '1'){
			++q;
		}
	}
	printf("%s",Stringzin);
	if(q % 2 == 0){
		printf("0\n");
	}
	else{
		printf("1\n");
	}

	return 0;
}