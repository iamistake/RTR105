#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
float function(float x);
float derivate(float x,float delta);
float derivate_f(float x,float delta);

void main(){
	//sin(x)' = cos(x)
	FILE*f;
	f = fopen("derivative.dat","w");
	float a,b,x,delta_x;

	printf("Ievadi a:\n ");
	scanf("%f",&a);
	printf("Ievadi b:\n ");
	scanf("%f",&b);
	printf("Vertîbas precizitate (dx):\n ");
	scanf("%f",&delta_x);

	fprintf(f,"\tx\t\tf(x)\t   f\'(x) fd");
	fprintf(f,"\t\tf\'(x) af");
	fprintf(f,"\t\tf\'\'(x) fd");
	fprintf(f,"\t\tf\'\'(x) ad");
	fprintf(f,"\n");
	x = a;
	while(x<b){


		fprintf(f,"%10.2f\t%10.2f\t",x,function(x));
		fprintf(f,"%10.2f\t",derivate_f(x,delta_x));
		fprintf(f,"%10.2f\t",derivate(x,delta_x));
		fprintf(f,"%10.2f\t",derivate_f(derivate_f(x,delta_x),delta_x));
		fprintf(f,"%10.2f",derivate(derivate(x,delta_x),delta_x));
		fprintf(f,"\n");
		x+= delta_x;
	}
	fclose(f);
}

float function(float x){
	float y = x*x + 2*x + 1;
	return y;


}



float derivate_f(float x,float delta){
	return (function(x+delta)-function(x))/delta;
	
}


float derivate(float x0,float delta){
	float x1 = x0-delta;
	float x2 = x0+delta;
	float y1 = function(x1);
	float y2 = function(x2);
	return (y2 - y1)/(x2 - x1);

}

