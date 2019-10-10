#include <stdio.h>
#include <time.h>
void main()
{
 int number1;
 clock_t start_t, end_t, total_t;
 start_t = clock();

 printf("Cienījamais lietotāj, lūdzu, ievadi 1 skaitli : ");
 scanf("%d",&number1);

 if(number1 % 2==0 )
  printf("Tavs skaitlis %d ir pāra skaitlis\n",number1);
else
  printf("Tavs skaitlis %d ir nepāra skaitlis\n",number1);
 end_t =clock();
 printf("Apreiķins aizņema no %ld līdz %ld -> %ld\n", start_t, end_t, end_t-start_t);
}
