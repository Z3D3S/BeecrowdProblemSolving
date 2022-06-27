#include <stdio.h>

int main() {
	int i,j,aux = 0,k,erro = 0,N,aux1,aux2;
	char matriz[26][26],String1[1001000],String2[1001000];
	for(i = 0;i < 26;++i){
		erro = i;
		for(j = 0;j < 26;++j){
			matriz[i][j] = 'a'+aux+erro;
			if(('a'+aux+erro) == 'z'){
				aux = 0;
				erro = 0;
			}
			else{
				aux++;
			}
		}
		aux = 0;
	}
	scanf("%s %d",String1,&N);
	while((--N) >= 0){
		scanf(" %[^\n]",String2);
		k = 0;
		j = 0;
		while(String2[k] != '\0'){
			if(String2[k] != 'a'&&String2[k] != 'e'&&String2[k] != 'i'&&String2[k] != 'o'&&String2[k] != 'u'&&String2[k] != ' '){
				for(k = k,j = j;String2[k] != ' '&&String2[k] != '\0';++k){
					if(String1[j] == '\0'){
						j = 0;
					}
					aux1 = String1[j] - 'a';
					aux2 = String2[k] - 'a';
					if(matriz[aux2][aux1] >= 'a'&&matriz[aux2][aux1] <= 'z'){
						printf("%c",matriz[aux2][aux1]);
						++j;
					}
				}
			}
			else if(String2[k] != ' '){
				for(k = k;String2[k] != ' '&&String2[k] != '\0';++k){
					printf("%c",String2[k]);
				}
			}
			else{
				while(String2[k] == ' '){
					++k;
				}
				if(String2[k] != '\0'){
					printf("%c",String2[k-1]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}