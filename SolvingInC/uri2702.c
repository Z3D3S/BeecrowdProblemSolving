#include <stdio.h>

int main() {
	int i,V_a[3],V_r[3],cont = 0;
	for(i = 0; i < 3;++i){
		scanf("%d",&V_a[i]);
	}
	for(i = 0; i < 3;++i){
		scanf("%d",&V_r[i]);
	}
	if((V_r[0] - V_a[0]) < 0){
		cont = cont + 0;
	}
	else{
		cont = cont + (V_r[0] - V_a[0]);
	}
	if((V_r[1] - V_a[1]) < 0){
		cont = cont + 0;
	}
	else{
		cont = cont + (V_r[1] - V_a[1]);
	}
	if((V_r[2] - V_a[2]) < 0){
		cont = cont + 0;
	}
	else{
		cont = cont + (V_r[2] - V_a[2]);
	}
	printf("%d\n",cont);
	return 0;
}