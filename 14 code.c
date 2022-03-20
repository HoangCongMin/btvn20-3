#include <stdio.h>
int main(){
  int x;
  int y;
  printf("nhapxy");
scanf("%d%d", &x, &y);
  if(x<2000||x>3000)
    printf("napsox");
  else
    printf("khople");
  if(y>100&&y<500)
    printf("napsoy");
  else
    printf("khople");
  return 0;
  
}
