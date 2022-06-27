#include <stdio.h>
int main() {	
	int N,r1 = 0,r2 = 0;
	scanf("%d",&N);
	char String[1000000],raca;
	while((--N) >= 0){
		scanf("%s",String);
		raca = getchar();
		while(raca == ' '){
			raca = getchar();
		}
		if(raca == 'F'){
			++r1;
		}
		else if(raca == 'M'){
			++r2;
		}
	}
	printf("%d carrinhos\n%d bonecas\n",r2,r1);
	return 0;
}