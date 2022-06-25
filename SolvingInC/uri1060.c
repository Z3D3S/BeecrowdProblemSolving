#include <stdio.h>
 
int main() {
 	int i,cocozin;
 	float num;
 	for(i = 0,cocozin = 0;i < 6;++i){
 		scanf("%f",&num);
 		if(num > 0){
 			++cocozin;
 		}
 	}
 	printf("%d valores positivos\n",cocozin);
    return 0;
}