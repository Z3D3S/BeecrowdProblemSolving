#include<stdio.h>

int main(){
  int i;
  char Stringuidibi[10000];
  scanf("%[^\n]",Stringuidibi);
  for(i = 0;Stringuidibi[i] != '\0'&& i <= 80;++i);
  if(i <= 80){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}