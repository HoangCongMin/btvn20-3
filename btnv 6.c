//
//  btnv 6.c
//  bai1c
//
//  Created by hoang minh on 16/03/2022.
//

#include <stdio.h>

int main(void) {
  int coban;
  printf("nhapcoban");
  scanf("%d", &coban);
  switch (coban)
    {
      case 200: printf("tienthuongladolla %d",50);
      break;
      case 300: printf("tienthuongladolla %d",125);
      break;
      case 400:   printf("tienthuongladolla %d",140);
      break;
      case 500 :printf("tienthuongladolla %d",175);
      break;
      default :printf("khonghopleloivao");
      break;}
      
      
      
    
  return 0;
}
