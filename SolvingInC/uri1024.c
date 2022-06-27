#include <stdio.h>

int main() {
 	int N,i,aux;
 	char auxChar,String[1100];
	scanf("%d",&N);
	while(getchar() != '\n');
	++N;
	while(--N){
		scanf("%[^\n]",String);
		while(getchar() != '\n');
		for(i = 0;String[i] != '\0';++i){
			if((String[i] >= 'a'&&String[i] <='z')||(String[i] >= 'A'&&String[i] <= 'Z')){
				String[i] = String[i] + 3;
			}
		}
		aux = i;
		for(i = 0;i < aux/2;++i){
			auxChar = String[i];
			 String[i] = String[aux-1-i];
			 String[aux-1-i] = auxChar;   
		}
		for(i = aux/2; String[i] != '\0';++i){
			String[i] = String[i] - 1;
		}
		printf("%s\n",String);
	}


	return 0;
}
