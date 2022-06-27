#include <stdio.h>

int main() {
char String[30],StringDecifrada[10000];
int N,i,j;

while(scanf("%s",String) != EOF){
	scanf("%d",&N);
	++N;
	j = 0;
	while(--N){
		scanf("%d",&i);
		StringDecifrada[j] = String[i-1];
		++j;
	}
	StringDecifrada[j] = '\0';
	printf("%s\n",StringDecifrada);
	for(j = 0;StringDecifrada[j] != '\0';++j){
		StringDecifrada[j] = '\0';
	}
}

	

	return 0;
}