#include <stdio.h>
int main() {	
	int N,r1 = 0,r2 = 0,r3 = 0,r4 = 0,r5 = 0;
	scanf("%d",&N);
	char String[1000000],raca;
	while((--N) >= 0){
		scanf("%s",String);
		raca = getchar();
		while(raca == ' '){
			raca = getchar();
		}
		if(raca == 'A'){
			++r1;
		}
		else if(raca == 'E'){
			++r2;
		}
		else if(raca == 'H'){
			++r3;
		}
		else if(raca == 'M'){
			++r4;
		}
		else if(raca == 'X'){
			++r5;
		}
	}
	printf("%d Hobbit(s)\n%d Humano(s)\n%d Elfo(s)\n%d Anao(s)\n%d Mago(s)\n",r5,r3,r2,r1,r4);
	return 0;
}