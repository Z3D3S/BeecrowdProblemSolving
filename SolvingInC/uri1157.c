#include <stdio.h>
 
int main() {
	int i,X;
	scanf("%d",&X);
	for(i = 1;i <= X;++i){
		if(X % i == 0){
			printf("%d\n",i);
		}
	}
    return 0;
}