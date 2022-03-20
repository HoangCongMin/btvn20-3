//
//  thuchanh.c
//  bai1c
//
//  Created by hoang minh on 14/03/2022.
//

#include <stdio.h>

#include <stdio.h>

int main(void) {
char c;
  printf("enter character");
  scanf("%c",&c);
  if(c>='A'&&c<='z')
  printf("lowercharacter=%c", c+'a'-'A' );
else
  printf("character is= %c",c);
}
