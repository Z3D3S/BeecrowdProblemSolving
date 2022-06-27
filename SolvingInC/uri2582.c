#include <stdio.h>

int main() {
	int C,X,Y;
	scanf("%d",&C);
	++C;
	while(--C){
		scanf("%d %d",&X,&Y);
		if(X+Y == 0){
			printf("PROXYCITY\n");
		}
		else if(X+Y == 1){
			printf("P.Y.N.G.\n");
		}
		else if(X+Y == 2){
			printf("DNSUEY!\n");
		}
		else if(X+Y == 3){
			printf("SERVERS\n");
		}
		else if(X+Y == 4){
			printf("HOST!\n");
		}
		else if(X+Y == 5){
			printf("CRIPTONIZE\n");
		}
		else if(X+Y == 6){
			printf("OFFLINE DAY\n");
		}
		else if(X+Y == 7){
			printf("SALT\n");
		}
		else if(X+Y == 8){
			printf("ANSWER!\n");
		}
		else if(X+Y == 9){
			printf("RAR?\n");
		}
		else if(X+Y == 10){
			printf("WIFI ANTENNAS\n");
		}
	}
	return 0;
}