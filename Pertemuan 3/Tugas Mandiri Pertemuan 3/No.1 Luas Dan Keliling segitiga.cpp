#include <stdio.h>

int main()
{

  int a, t;
  float luas;
  
  printf("Masukkan panjang alas: ");
  scanf("%d",&a);
  printf("Masukkan tinggi segitiga: ");
  scanf("%d",&t);
  
  luas = 0.5*a*t;
  
  printf("\nLuas segitiga adalah %2.f", luas);

    return 0;

}
