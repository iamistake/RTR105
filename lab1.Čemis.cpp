#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
double mans_sinuss (double x)	
{
double a0,a499,a500 , S0,S499,S500 ;
int k=0,l=499,p=500;

a0 = pow(-1,k)*pow(x,2* k+1)/(1.) ;
S0 =a0;
printf( "%.2f\t%8.2f\t%8.2f\n" ,x ,a0,S0) ;

a499 = pow(-1,l)*pow(x,2* l+1)/(1.) ;
S499 =a499;
printf( "%.2f\t%8.2f\t%8.2f\n" ,x ,a499,S499) ;

a500 = pow(-1,p)*pow(x,2* p+1)/(1.) ;
S500 =a500;
printf( "%.2f\t%8.2f\t%8.2f\n" ,x ,a500,S500) ;

while (k<3){
k++;
a0 = a0 * (-1) *x*x / ((2* k) *(2*k+1)) ;
S0 = S0 + a0 ;
printf ( "%.2 f\t%8.2 f\t%8.2 f\n" ,x ,a0 ,S0);
}
return S0 ;

while (l<10000){
l++;
a499 = a499 * (-1) *x*x / ((2* l) *(2*l+1)) ;
S499 = S499 + a499 ;
printf ( "%.2 f\t%8.2 f\t%8.2 f\n" ,x ,a499 ,S499);
}
return S499 ;

while (p<10000){
p++;
a500 = a500 * (-1) *x*x / ((2* p) *(2*p+1)) ;
S500 = S500 + a500 ;
printf ( "%.2 f\t%8.2 f\t%8.2 f\n" ,x ,a500 ,S500);
}
return S500 ;
}
int  main () {
double x ,y , yy ;

	printf("Ievadi x :");
	scanf("%f",&x);
y=sin( x ) ;
printf( "standarta funkcija sin-y=sin (%.2f)=%.2f\n" ,x,y ) ;
yy = mans_sinuss ( x ) ;
printf( "lietotaaja funkcija-y=mans_sinuss (%.2 f )=%.2f \n" ,x , yy ) ;

getch();
}

