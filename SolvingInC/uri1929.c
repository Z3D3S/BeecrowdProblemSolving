#include <stdio.h>
float difabsZ(float* Numero1, float* Numero2){
	float aux;
	aux = (*Numero1-*Numero2);
	if(aux < 0){
		aux *= -1;
	}
	return aux;
}
int main() {
    float A,B,C,D,cont1=0,cont2=0,cont3=0,cont4=0;
    scanf("%f %f %f %f",&A,&B,&C,&D);
    if(difabsZ(&B,&C) < A&&A < (B + C)){
        ++cont1;
    }
    if(difabsZ(&B,&D)< A&&A < (B + D)){
        ++cont2;
    }
    if(difabsZ(&D,&C) < A&&A < (C + D)){
        ++cont3;
    }
    if(difabsZ(&A,&C)< B&&B < (A + C)){
        ++cont1;
    }
    if(difabsZ(&A,&D)< B&&B < (A + D)){
        ++cont2;
    }
    if(difabsZ(&D,&C) < B&&B < (C + D)){
        ++cont4;
    }
    if(difabsZ(&B,&A)< C&&C < (A + B)){
        ++cont1;
    } 
    if(difabsZ(&D,&A)< C&&C < (D + A)){
        ++cont3;
    }
    if(difabsZ(&D,&B) < C&&C < (B + D)){
        ++cont4;
    }
    if(difabsZ(&A,&B) < D&&D < (B + A)){
        ++cont2;
    }
    if(difabsZ(&A,&C) < D&&D < (C + A)){
        ++cont3;
    }
    if(difabsZ(&B,&C) < D&&D < (B + C)){
        ++cont4;
    }
    if(cont1 == 3||cont2 == 3||cont3 == 3||cont4 == 3){
        printf("S\n");
    }
    else{
        printf("N\n");
    }
    return 0;
}