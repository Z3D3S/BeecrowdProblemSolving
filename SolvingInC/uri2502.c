#include <stdio.h>

int main() {
	int C,N,j,i,Caux1,Caux2,aux,G;
	char String1[100000],String2[100000],criptografado[10000],criptografadoaux[10000];
	while(scanf("%d %d",&C,&N) != EOF){
		while(getchar() != '\n');
		for(i=0;String1[i];++i){
			String1[i] = '\0';
		}
		for(i=0;String1[i];++i){
			String2[i] = '\0';
		}
		Caux1= C;
		for(i=0;i< Caux1;++i){
			scanf("%c",&String1[i]);
			if(String1[i] >= 'a'&&String1[i] <= 'z'){
				String1[i] = String1[i] - ('c'-'C');
			}
		}
		String1[i] = '\0';
		while(getchar() != '\n');
		Caux2 = C;
		for(i=0;i< Caux2;++i){
			scanf("%c",&String2[i]);
			if(String2[i] >= 'a'&&String2[i] <= 'z'){
				String2[i] = String2[i] - ('c'-'C');
			}
		}
		String2[i] = '\0';
		while(getchar() != '\n');
		++N;
		while(--N){
			for(j=0;criptografadoaux[j] != '\0';++j){
				criptografadoaux[j] = '\0'; 
			}
			scanf("%[^\n]",criptografado);
			while(getchar() != '\n');
			for(j=0;criptografado[j] != '\0';++j){
				G = 1;
				for(i=0;String1[i] != '\0'&&String2[i] != '\0';++i){
					if(criptografado[j] >= 'A'&&criptografado[j] <= 'Z'){
						if(criptografado[j] == String1[i]){
							criptografadoaux[j] = String2[i];
							G = 0;
						}
						else if(criptografado[j] == String2[i]){
							criptografadoaux[j] = String1[i];
							G = 0;
						}
					}
					else if(criptografado[j] >= 'a'&&criptografado[j] <= 'z'){
						if(criptografado[j] == String1[i]+('c'-'C')){
								if(String2[i] >= 'A'&&String2[i] <= 'Z'){
								criptografadoaux[j] = String2[i]+('c'-'C');
								G = 0;
								}
								else{
									criptografadoaux[j] = String2[i];
									G = 0;
								}
							}
						else if(criptografado[j] == String2[i]+('c'-'C')){
							if(String1[i] >= 'A'&&String1[i] <= 'Z'){
								criptografadoaux[j] = String1[i]+('c'-'C');
								G = 0;
								}
								else{
									criptografadoaux[j] = String1[i];
									G = 0;
								}
						}	
					}
					else{
						if(criptografado[j] == String1[i]){
							if(String2[i] >= 'A'&&String2[i] <= 'Z'){
								criptografadoaux[j] = String2[i]+('c'-'C');
								G = 0;
							}
							else{
								criptografadoaux[j] = String2[i];
								G = 0;
							}
						}
						else if(criptografado[j] == String2[i]){
							if(String1[i] >= 'A'&&String1[i] <= 'Z'){
								criptografadoaux[j] = String1[i]+('c'-'C');
								G = 0;
							}
							else{
								criptografadoaux[j] = String1[i];
								G = 0;
							}
						}
					}
				}
				if(G == 1){
					criptografadoaux[j] = criptografado[j];
				}
			}
			criptografadoaux[j] = '\0';
			printf("%s\n",criptografadoaux);
		}
		printf("\n");
	}

	return 0;
}