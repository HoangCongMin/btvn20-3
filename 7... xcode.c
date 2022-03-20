//
//  7... xcode.c
//  bai1c
//
//  Created by hoang minh on 17/03/2022.
//

#include <stdio.h>

int main(void) {
  int masanpham;
  float soluongdathang,rate=0.0;
  printf(" nhap ma san pham");
  scanf("%d", &masanpham);
  printf("soluongdathang");
  scanf("%f", &soluongdathang);
if(masanpham==1)
{
  if (masanpham>=500)
    rate = 0.12;
else
    if (soluongdathang>=300)
  rate = 0.08;
  else
  rate = 0.02;
    }
  else if (masanpham==2)
  {
if (soluongdathang>=2000)
      rate = 0.10;
else if (soluongdathang>=1500)
      rate = 0.05;
    }
  else if (masanpham==3)
  {
if (soluongdathang>=5000)
      rate = 0.10;
else if (soluongdathang>=2500)
      rate = 0.05;
        
  }
  soluongdathang-=soluongdathang*rate;
  printf("ketquala %.2f", soluongdathang);
  return 0;
}
