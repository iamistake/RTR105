
#include<stdio.h>
#include<math.h>//fabs
void main()
{
 int a,b,c,t;
 printf("ievadi tris skaitlus");
scanf("%d"&a); scanf("%d"&b); scanf("%d"&c);
if(a>b && a>c) if(b>c) ;//a,b,c
		else {t=c;c=b;b=t;}//a,c,b
if(b>a && b>c) if(a>c) {t=b;b=a;a=t}//b,a,c
		else{t=a;a=b;b=t;b=c;c=t}//b,c,a
if(c>a && c>b) if(a>c) {t=a;a=c;c=t;c=b;b=t}//c,a,b
		else{t=a;a=c;c=t}//c,b,a

printf("Augošā secībā: %d %d %d\n",c,b,a);
printf("Dilstošā secībā: %d %d %d\n",a,b,c);

if(fabs(a)>fabs(b) && fabs(a)>fabs(c)) if(fabs(b)>fabs(c));//|a|,|c|,|b|
					else		  {t=c;c=b;b=t;}//|a|,|b|,|c|
if(fabs(b>fabs(a) && fabs(b)>fabs(c)) if(fabs(a)>fabs(c)) {t=b;b=a;a=t;}//|b|,|c|,|b|
                                        else    	  {t=a;a=b;b=t;b=c;c=t;}//|b|,|a|,|c|
if(fabs(c)>fabs(a) && fabs(c)>fabs(b)) if(fabs(a)>fabs(b)){t=a;a=c;c=t;c=b;b=t;}//|c|,|a|,|b|
                                        else    	  {t=a;a=c;c=t;}//|c|,|b|,|a|


printf("Augošā secībā pēc moduļa: %d %d %d\n",c,b,a);
printf("Dilstošā secībā pēc moduļa: %d %d %d\n",a,b,c);










}

