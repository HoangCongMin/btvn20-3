#include <stdio.h>
int main(){
  float hangbanra,hh;
  char loaisanpham;
  printf("nhaphangbanra");
  scanf("%f", &hangbanra);
  printf ("loaisanpham");
  scanf("%c", &loaisanpham);
  if(hangbanra>10000)
    if(loaisanpham=='A')
      hh=hangbanra*0.1;
  else
      hh=hangbanra*0.08;
  else
    hh=hangbanra*0.05;
  printf("hhla %f",hh);
    
  
  return 0;
    
}
