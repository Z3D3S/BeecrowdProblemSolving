#include <stdio.h>
 
int main() {
	int Cont,h,g,X;
	scanf("%d",&X);
	scanf("%d",&Cont);
	for(h = 1,g = 1;h <= Cont;++h){
		printf("%d",h);
		if(g == X){
			g = 0;
			printf("\n");
		}
		else{
			printf(" ");
		}
		++g;
	}
    return 0;
}