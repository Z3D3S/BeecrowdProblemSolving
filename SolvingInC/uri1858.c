#include <stdio.h>
 
int main() {
	int aux = 21,num,caqui,i,V[100],X;
	scanf("%d",&X);
	for (i = 0; i < X; ++i){
		scanf("%d",&num);
		V[i] = num;
	}
	for(i = 0;i < X;++i){
		if(aux > V[i]){
			aux = V[i];
		}
	}
	for(i = 0;aux != V[i];++i);
	caqui = i+1;
	printf("%d\n",caqui);

    return 0;
}