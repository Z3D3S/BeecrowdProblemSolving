#include <stdio.h>
 
int main() {
	int X;
	scanf("%d",&X);
	++X;
	while(--X){
		printf("Ho");
		if(X != 1){
			printf(" ");
		}
	}
	printf("!\n");
 
    return 0;
}