#include <stdio.h>
 
int main() {
	int Cont,f,h;
	scanf("%d",&Cont);
	for(f = 0,h = 1;f < Cont;++h){
		printf("%d ",h);
		printf("%d ",h*h);
		printf("%d\n",h*h*h);
		++f;
	}
    return 0;
}