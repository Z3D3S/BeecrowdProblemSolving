#include <stdio.h>
int main() {
	int X,i;
	scanf("%d",&X);
	for(i = 0; i < 6;++X){
		if(X % 2 != 0){
		++i;
		printf("%d\n", X);
		}
	}
    return 0;
}