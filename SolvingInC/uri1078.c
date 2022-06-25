#include <stdio.h>
 
int main() {
	int X,i;
	scanf("%d",&X);
	for(i = 1;i <= 10;++i){
		printf("%d x %d = %d\n",i,X,X*i);
	}
    return 0;
}