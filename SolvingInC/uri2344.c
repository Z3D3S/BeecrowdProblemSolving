#include <stdio.h>

int main(){
	int VN;
	scanf("%d",&VN);
	if( VN >= 1){
		if(VN >= 36 ){
			if(VN >= 61){
				if(VN >= 86){
					printf("A\n");
				}
				else{
					printf("B\n");
				}
			}
			else{
				printf("C\n");
			}
		}
		else{
			printf("D\n");	
		}
	}
	else{
		printf("E\n");
	}
	
	return 0;
}