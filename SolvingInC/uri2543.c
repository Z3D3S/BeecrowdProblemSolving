#include <stdio.h>

int main() {
	int N,I,User,Boll,Cont;
	while(scanf("%d %d",&N,&I) != EOF){
		++N;
		Cont = 0;
		while(--N){
			scanf("%d",&User);
			scanf("%d",&Boll);
			if(User == I){
				if(Boll == 0){
					++Cont;
				}
			}
		}
		printf("%d\n",Cont);
	}
	

	return 0;
}