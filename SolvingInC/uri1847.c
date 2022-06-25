#include <stdio.h>

int main(){
	int x,y,A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(B == A){
		if(C > B){
			printf(":)\n");
		}
		else{
			printf(":(\n");
		}
	}
	else if(B < A){
		if(C < B&&(B-C) >= (A-B)){
			printf(":(\n");
		}
		else if(C < B&&(C-B) < (A-B)){
			printf(":)\n");
		}
		else if(C > B||C == B){
			printf(":)\n");
		}		
	}
	else if(B > A){
		if(C > B&& (C-B) >= (B-A)){
			printf(":)\n");
		}
		else if(C < B|| C == B){
			printf(":(\n");
		}
		else if(C >B&&(C-B) < (B-A)){
			printf(":(\n");
		}
	}

	return 0;
}