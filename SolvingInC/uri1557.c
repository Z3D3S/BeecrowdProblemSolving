#include <stdio.h>

int main() {
	int a,b,k,X,M[100][100],i,j;
	while(1){
		scanf("%d",&X);
		if( X == 0){
			break;
		}
		k = 1;
		for(i=0;i< X;++i){
			for(j = 0;j< X;++j){
				if(k == 1){
					M[i][j] = k;
					++k;
				}
				else if(i> 0&&j == 0){
					M[i][j] = M[i-1][j+1];
				}
				else{
					M[i][j] = 2*M[i][j-1];
				}
			}
		}
		for(i = 0;i < X;++i){
			for(j = 0;j < X;++j){
				if(X==3 || X==4){
                    if(j==0) printf("%2d",M[i][j]);
                    else printf(" %2d",M[i][j]);
                }
                else if(X==5){
                    if(j==0) printf("%3d",M[i][j]);
                    else printf(" %3d",M[i][j]);
                }
                else if(X==6 || X==7){
                       if(j==0) printf("%4d",M[i][j]);
                       else printf(" %4d",M[i][j]);
                }
                else if(X==8 || X==9){
                       if(j==0) printf("%5d",M[i][j]);
                       else printf(" %5d",M[i][j]);
                }
                else if(X==10){
                       if(j==0) printf("%6d",M[i][j]);
                       else printf(" %6d",M[i][j]);
                }
                else if(X==11 || X==12){
                       if(j==0) printf("%7d",M[i][j]);
                       else printf(" %7d",M[i][j]);
                }
                else if(X==13 || X==14){
                       if(j==0) printf("%8d",M[i][j]);
                       else printf(" %8d",M[i][j]);
                }
                else if(X==15){
                       if(j==0) printf("%9d",M[i][j]);
                       else printf(" %9d",M[i][j]);
                }
                else if(X==1)printf("%1d",M[i][j]);
                else if(X==2){
                    if(j==0)printf("%d",M[i][j]);
                    else printf(" %d",M[i][j]);
                }
			}printf("\n");
		}printf("\n");
	}

    return 0;
}