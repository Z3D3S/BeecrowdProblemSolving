#include <stdio.h>
 
int main() {
	int i,X,Num,in = 0,out = 0;
	scanf("%d",&X);
	for(i =0;i < X;++i){
		scanf("%d",&Num);
		if(Num >= 10&&Num <= 20){
			++in;
		}
		else{
			++out;
		}
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
    return 0;
}