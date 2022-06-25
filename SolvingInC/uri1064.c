#include <stdio.h>
 
int main() {
 	int i,cocozin;
 	float numV = 0,num;
 	double Media;
 	for(i = 0,cocozin = 0;i < 6;++i){
 		scanf("%f",&num);
 		if(num > 0){
 			++cocozin;
 			numV += num;
 		}
 		Media = numV/cocozin;
 	}
 	printf("%d valores positivos\n",cocozin);
 	printf("%.1lf\n",Media);
    return 0;
}