#include <stdio.h>

void main()
{

 int a=10; // atmina paradisies mainigais a(izmers 1 byte, saturs  0000 1010)
 printf("Operacija <<:%d<<1 rezultats  %d\n",a,a<<1);
 int b;//atmina paradas b mainigais(izmers 1 byte saturs ???? ???? ???? ???? ???? ???? ???? ????)
 printf("B mainiga \"sakuma\"stavoklis (uzreiz pec deklaresanas: %d\n ",b);
 b=a<<2;//seit ir operacijas  pieskirsana 
printf("Operacija <<: %d<<%d rezultats  %d\n",a,2,b);
 int c;
printf("Papetisim << operaciju\n----------------\n");
printf("cienijamais lietotajs , ludzu ievadi operacijas 1 , operandu:");
scanf("%d",&a);
printf("cienijamais lietotajs , ludzu ievadi operacijas 2 , operandu:");
scanf("%d",&c);
b=a<<c;
printf("----------------------\nSkaties kas ir sanacis: %d\n",b);

}
/* char a=10; // atmina paradisies mainigais a(izmers 1 byte, saturs  0000 1010)
 printf("Operacija <<:%d<<1 rezultats  %d\n",a,a<<1);
 char b;//atmina paradas b mainigais(izmers 1 byte saturs ???)
 printf("B mainiga \"sakuma\"stavoklis (uzreiz pec deklaresanas: %d\n ",b);
 b=a<<2;//seit ir operacijas  pieskirsana 
printf("Operacija <<: %d<<%d rezultats  %d\n",a,2,b);
 char c;
printf("Papetisim << operaciju\n----------------\n");
printf("cienijamais lietotajs , ludzu ievadi operacijas 1 , operandu:");
scanf("%d",&a);
printf("cienijamais lietotajs , ludzu ievadi operacijas 2 , operandu:");
scanf("%d",&c);
b=a<<c;
printf("----------------------\nSkaties kas ir sanacis: %d\n",b);
*/
