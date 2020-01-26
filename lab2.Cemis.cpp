#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>


float function(float x);
int main()
{
	float a,b,c,y,prec,a_file;
	int i=0;
	printf("Ievadi mainigo A=>\n ");
	scanf("%f",&a);
	printf("Ievadi mainigo B=>\n ");
	scanf("%f",&b);
	printf("Ievadi mainigo C=>\n ");
	scanf("%f",&c);
	printf("Ievadiet precizitati =>\n ");
	scanf("%f",&prec);

	a_file = a;
	FILE *fp;
	fp = fopen("func_dati.dat","w");
	while(a_file<b){
		fprintf(fp, "%f %f\n",a_file,function(a_file));
		a_file = a_file + prec;
	}
	fclose(fp);


	while(a < b){
		if(trunc(function(a)) == c){
			printf("f(x) = %f if x = %f\n",c,a);
			printf("Atkartojumu skaits x atrasanai: %d\n",i);
			return 0;

		}
		//printf("Function: %f, a: %f, i: %d, c: %f\n",function(a),a,i,c);
		a = a+prec;
		i++;


	
	}
	printf("Nav atbildes");
}

float function(float x){
	float y =  x*x + 2*x + 1;
	return y;



getch();
}

