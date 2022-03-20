//
//  btvn6.2 .c
//  bai1c
//
//  Created by hoang minh on 16/03/2022.
//

#include <stdio.h>

int main(void) {
  char ch;
  printf("nhapbangchucai(a-z)");
  scanf ("%c",&ch);
  if(ch<'a'||ch>'z')
    printf("charecterbangchucai");
  else
    switch(ch)
      {case 'a':
        case 'e':
          case 'i':
        case 'o':
        case 'u':
    printf("charaterlanguyenam");
        break;
          case'z':
            printf("bangchucai(z) cuoicungdaduocnhan");
            break;
        default:
          printf("chareterlaphuam");
          break;}
  
  return 0;
}
