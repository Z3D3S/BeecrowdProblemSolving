#include <stdio.h>
#include <string.h>

int COL(char String[100]){
	int n,i;
	i = strlen(String);
	if(i == 1){
		n = (String[i-1]-'A'+1);
	}
	else if(i == 2){
		n = (String[i-1]-'A'+1)+(String[i-2]-'A'+1)*26;
	}
	else if(i == 3){
		n = (String[i-1]-'A'+1)+(String[i-2]-'A'+1)*26+(String[i-3]-'A'+1)*676;
		if(n > 16384){
			n = 0;
		}
	}
	else{
		n = 0;
	}
	return n;
}
int main() {
	int Coluna;
	char String[100];
	while(scanf("%s",String) != EOF){
		Coluna = COL(String);
		if(Coluna){
			printf("%d\n",Coluna);
		}
		else{
			printf("Essa coluna nao existe Tobias!\n");
		}
	}
	

	return 0;
}