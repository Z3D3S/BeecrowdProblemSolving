#include <stdio.h>
 
int main() {
    int A,B,C,D;
scanf("%d %d %d %d\n",&A,&B,&C,&D);
if(B > C&&D > A&&C+D > A+B){
    printf("Valores aceitos\n");
}
else{
    printf("Valores nao aceitos\n");
}
    return 0;
}