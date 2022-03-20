#include <stdio.h>
int main(){
  int num1;
  int num2;
  num1=77;
  num2=90;
  if(num1==num2)
    printf("haisobangnhau%d");
  else if(num1<num2)
    printf("solonhon %d", num2);
  else
    printf("solonhon %d", num1);
  return 0;
    
}
