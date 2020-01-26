#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

void main(){
        int k = 0;
        int tmp,n,nn,sum,med;
        char string[255];
        int num_array[1000];
	int mode[1000];
        scanf("%[^\n]%*c", string);
        printf("Rindas garums: %ld\n",strlen(string));

        while(string[k] != '\0'){
                int n = string[k];
                num_array[k]=n;
                k++;
        }
        for(int i = 0;i<k;i++){
                for(int j = 0;j<k-1;j++){
                        if(num_array[j]>num_array[j+1]){
                        tmp = num_array[j+1];
                        num_array[j+1] = num_array[j];
                        num_array[j] = tmp;
                        }
                }
        }
        char min = num_array[0];
        char max = num_array[k-1];
      for(int i = 0; i<k;i++){
                char c = num_array[i];
        }
        printf("Mazaka vertiba: %c- %d\nLielaka vertiba: %c- %d\n",num_array[0],min,num_array[k-1],max);

        for(int i = 0;i<k;i++){
                sum = sum + num_array[i];
        }
        printf("Videja vertiba: %d\n",sum/k);
	tmp =0;
        for(int j=0;j<k;j++){
                for(int i=0;i<k-1;i++){
                        if(num_array[i] > num_array[i+1]){
                                tmp = num_array[i+1];
                                num_array[i+1] = num_array[i];
                                num_array[i] = tmp; 
                        }
                }
        }
//

	n=0;
	k=0;
	tmp =0;
        while(string[k] != '\0'){
                int n = string[k];
                num_array[k]=n;
                k++;
        }
        for(int i = 0;i<k;i++){
                for(int j = 0;j<k-1;j++){
                        if(num_array[j]>num_array[j+1]){
                        tmp = num_array[j+1];
                        num_array[j+1] = num_array[j];
                        num_array[j] = tmp;
                        }
                }
        }
        if(k%2 == 1){
                printf("Mediana: %d- %c\n",num_array[k/2],num_array[k/2]);
        } else {
                printf("Medianas %d- %c , %d- %c\n",num_array[k/2-1],num_array[n/2-1],num_array[k/2],num_array[k/2]);
        }
	
	for (int i = 0; i<1000;i++){
		mode[i] = -1;

	}

	for(int i=0;i<strlen(string)+1;i++){
		mode[num_array[i]] = 0;
	}

	for(int i = 0; i<strlen(string);i++){
		mode[num_array[i]]++;

	}
	int max_num = -1000;
	for(int i = 1;i<1000;i++){
		if(mode[i] != -1){
			if(mode[i] > max_num){
				max_num = mode[i];
			}
		}
	}
	printf("Moda(s) ir:\n");
	for(int i = 1;i<1000;i++){
		char c = i;
		
		if(mode[i] == max_num){
			printf("%c - %d\n ",c,i);
		}
	}

        for(int i = 0; i<k;i++){
                char c = num_array[i];
                printf("%c ",c);
        }
        printf("\n");
	for(int i = 0; i<k;i++){
		printf("%d ",num_array[i]);
	}
	printf("\n");

}

