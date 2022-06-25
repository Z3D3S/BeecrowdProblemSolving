#include <stdio.h>
 
int main(){
	int Num,i,j = 0;
 	for(i = 0;i < 5;++i){
 		scanf("%d",&Num);
 		if(Num % 2 == 0){
 			++j;
 		}
 	}
 	printf("%d valores pares\n",j);
    return 0;
}