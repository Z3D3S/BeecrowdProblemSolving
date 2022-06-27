#include <stdio.h>

int main() {
	int V[26],i;
	for(i = 0;i < 26;++i){
		V[i] = 97+i;
		printf("%d e %c\n",V[i],V[i]);
	}
	return 0;
}