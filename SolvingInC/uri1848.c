#include <stdio.h>

int main(){
	int cont,i,k = 0,N[4];
	char String[10];
	while(cont != 3){
		scanf("%[^\n]",String);
		while(getchar() != '\n');
		for(i = 0;String[i] != '\0';++i);
		if(i == 7){
			k = 0;
			++cont;
		}
		if(String[0] == '*'){
			k += 4;
		}
		if(String[1] == '*'){
			k += 2;	
		}
		if(String[2] == '*'){
			k += 1;
		}
		N[cont] = k;
	}
	for(i = 0;i < 3;++i){
		printf("%d\n",N[i]);
	}

	return 0;
}