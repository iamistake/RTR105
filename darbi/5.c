#include <stdio.h>
float pi()
{
return 3.14 ;
}


int main()
{
 int R = 144 ;
 int L = 2*pi() * R ;
 printf("Rinka ar radiusu %d garums ir %d m\n", R, L);
 return 0;
}
