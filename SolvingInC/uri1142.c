#include <stdio.h>
 
int main() {
	int Cont,f,h,g;
	scanf("%d",&Cont);
	for(f = 0,h = 1,g = 1;f < Cont;++h){
		printf("%d ",h);
		if(g == 3){
			g = 0;
			++f;
			++h;
			printf("PUM\n");
		}
		++g;
	}
    return 0;
}