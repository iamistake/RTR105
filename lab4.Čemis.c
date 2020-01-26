#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
float function(float x);
float rect(float a, float b, float prec);
float trapez(float a, float b, float prec);
float simpson(float a, float b, float prec);


void main(){
	float w,q,c,d,a,b,prec;
	float e = 0.0001;
	printf("Ievadi a:\n");
	scanf("%f",&a);
	printf("Ievadi b:\n");
	scanf("%f", &b);
	printf("Ievadi precizitati:\n");
	scanf("%f",&prec);
	printf("rezultats rect: %f\n",rect(a,b,prec));
	printf("rezultats trapez: %f\n",trapez(a,b,prec));
	q=2*prec;
	w=4*prec;
	c = simpson(a,b,q);
	do{
		d = c;
		q*=2;
		c=simpson(a,b,q);
	}
	while(fabs(d-c)>e);
		float k=simpson(a,b,q);

	printf("rezultats  Simpsom: %f\n",k);
}

float function(float x){
return  x*x + 2*x + 1;

}


float rect(float a, float b, float prec){
	float result = 0;
	float h = (b-a)/prec;
	while(a<b){
		result += h*function(a);
		a += h;
	}
	return result;
}

float trapez(float a, float b, float prec){
	float result = 0;
	float h = (b-a)/prec;

	int i;
	result += (function(a)+function(b)) * h/2;
	for (i=1;i<prec;++i){
		result += function(a + i * h) * h;
	}
	return result;

}

float simpson(float a, float b, float prec){
	int n = 12;
	int i;
	float S1, S2, h;
	h = (b-a)/(prec*2);
	for(i = 1; i <= 2*n-1;i++){
		if(i%2 == 0)
			S1 += 2* function(a+i*h);
		else S1+=4*function(a+i*h);
	}
	S2 =((function(a)+function(b)+S1))*h/3;
	return S2;

}
