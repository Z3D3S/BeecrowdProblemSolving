#include <stdio.h>
int main() {
	int m,n,t,u,h[5],v,Num1,Num2,Num3,Num4,Num5,Num6,Num7,Num8;
	char StringDi[4],StringDf[4];
	scanf("%s %d", StringDi,&Num1);
	scanf("%d : %d : %d",&Num2,&Num3,&Num4);
	scanf("%s %d ", StringDf,&Num5);
	scanf("%d : %d : %d",&Num6,&Num7,&Num8);
	m=60-Num4+Num8;
    n=(60-Num3-1+Num7)*60;
    t=(24-1-Num2+Num6)*3600;
    u=(Num5-Num1-1)*86400;
    v=m+n+t+u;
    h[0]=v/86400;
    printf("%d dia(s)\n", h[0]);
    h[0]=v%86400;
    h[1]=h[0]/3600;
    printf("%d hora(s)\n", h[1]);
    h[1]=h[0]%3600;
    h[2]=h[1]/60;
    printf("%d minuto(s)\n", h[2]);
    h[2]=h[1]%60;
    printf("%d segundo(s)\n", h[2]);
    return 0;
}
