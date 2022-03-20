#include <stdio.h>
int main(){
  char lum;
  printf("nhaplum");
  scanf("%c", &lum);
  switch(lum){
    case 'A':
     case 'a':
    printf("ada");
    break;
    case 'B':
    case 'b':
    printf("basic");
    break;
    case 'C':
    case 'c':
    printf("cobol");
    break;
    case 'D':
    case 'd':
    printf("dbase");
    break;
    case 'F':
    case 'f':
    printf("fortran");
    break;
    case 'P':
    case 'p':
    printf("pascal");
    break;
    case 'V':
    case 'v':
    printf("visual");
    break;
    default:
    printf("bannhapsai");
    
    
  }
  return 0;
  
}
