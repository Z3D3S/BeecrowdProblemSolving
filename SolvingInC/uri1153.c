#include <stdio.h>
int Fatorial(int num){
	if(num  <= 1){
		return 1;
	}
	return num*Fatorial(num-1);
}
int main() {
	int num;
	scanf("%d",&num);
	printf("%d\n",Fatorial(num));
    return 0;
}