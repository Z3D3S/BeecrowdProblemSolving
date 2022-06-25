#include <stdio.h>
 
int main() {
	int Cont,f,h;
	scanf("%d",&Cont);
	for(f = 0,h = 1;f < Cont;++h){
		printf("%d ",h);
		printf("%d ",h*h);
		printf("%d\n",h*h*h);
		printf("%d ",h);
		printf("%d ",(h*h)+1);
		printf("%d\n",(h*h*h)+1);
		++f;
	}
    return 0;
}