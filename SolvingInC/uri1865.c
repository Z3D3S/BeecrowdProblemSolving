#include <stdio.h>

int main(){
	int i,X,g;
	char String[35];
	scanf("%d",&X);
	while(getchar() != '\n');
	++X;
	while(--X){
		g = 0;
		scanf("%[^\n]" ,String);
		while(getchar() != '\n');
		for (i = 0;String[i] != '\0'; ++i){
				if(String[i] == 'T'||String[i] == 't'||String[i] == 'H'||String[i] == 'h'||String[i] == 'O'||String[i] == 'o'||String[i] == 'R'||String[i] == 'r'){
					++g;
				}
		}
		if(g == 4){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
	}

	return 0;
}