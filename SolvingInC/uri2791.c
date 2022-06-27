#include <stdio.h>

int main() {
	int i,contador = 0;
	char String[20];
	scanf("%[^\n]",String);
	for(i = 0;String[i] != '\0';++i){
		if(String[i] != ' '){
			++contador;
			if(String[i] == '1'){
				break;
			}
		}
	}
	printf("%d\n",contador);

	return 0;
}