#include <stdio.h>
int main(){
  int num1,num2,res;
  char op;
  num1=90;
  num2=33;
  op='-';
  switch(op)
    {
      case '+':
      res=num1+num2;
      printf("tongla %d", res);
      break;
      case'-':

      res=num1-num2;
      printf("sosaupheptru%d", res);
      break;
      case'/':
      res=num1/num2;
      printf("sosauphepchia%d", res);
      break;
      case'*':
      res=num1*num2;
      printf("sosauphepnhan%d", res);
      break;
      default:
      printf("khonghople");
      break;
    }
    
  return 0;
    
}
