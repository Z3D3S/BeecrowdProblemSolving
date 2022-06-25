#include <stdio.h>
 
int main() {
	int X,i;
	scanf("%d",&X);
	for(i =1;i < 10000;++i){
		if(i % X == 2){
			printf("%d\n",i);
		}
	}
    return 0;
}