#include <stdio.h>
 
int main() {
	int h,X;
	scanf("%d",&X);
	while(X != 0){
		for(h = 1;h <= X;++h){
			printf("%d",h);
			if(h == X){
				h = 0;
				printf("\n");
				scanf("%d",&X);
			}
			else{
				printf(" ");
			}
		}
	}
    return 0;
}