//
//  btvn6.1 .c
//  bai1c
//
//  Created by hoang minh on 16/03/2022.
//

#include <stdio.h>

int main(void) {
  int x,y;
  x=y=0;
  printf("enter choice (1-3):");
  scanf ("%d", &x);
  if (x==1)
  {printf ("enter value for y (1-5):");
    scanf("d",&y);
    if (y<=5)
      printf("the value for y is %d",y);
  else
      printf("the value of y exceeds5");}
  else
    printf ("choice entered was not 1");
    
  return 0;
}
