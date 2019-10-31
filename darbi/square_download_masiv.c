#include<stdio.h>
int main()
{
	int i;
	char mas[100];
	for(i=0;i<100;i++){
		mas[i]=i+1;
	}
	for(i=0;i<100;i++)
	{
		printf(" %d %d %d\n",i, mas[i], mas[i]);
	}
	
}
