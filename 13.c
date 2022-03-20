#include <stdio.h>
int main(){
  int m1;
  int m2;
  int m3;
  int tb;
  printf("nhapdiem");
  scanf("%d%d%d", &m1, &m2, &m3);
  tb=(m1+m2+m3)/3;
  if(tb>=90)
    printf("banxeploaie+", tb);
  else if(80<tb&& tb<90)
    printf("banxephangloaie", tb);
  else if(70<tb&&tb<80)
        printf("banxephangloaia+", tb);
  else if(60<tb&&tb<70)
        printf("banxephangloaia", tb);
else if(50<tb&&tb<60)
        printf("banxephangloaib", tb);
  else if(tb<50)
printf("banxephangloai", tb);
  return 0;

}
