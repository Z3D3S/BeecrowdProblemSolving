#include <stdio.h>

int main() {
	int i,j,number,L,C;
	scanf("%d",&L);
	scanf("%d",&C);
	for(i = 0;i < L;++i){
		for(j = 0;j < C;++j){
			if((j+i)%2 != 0){
				number = 0;
			}
			else{
				number = 1;
			}
		}
	}
	printf("%d\n",number);

	return 0;
}