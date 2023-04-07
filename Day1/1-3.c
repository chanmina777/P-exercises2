//好きな整数個乱数を作りその中での最大値を求める

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
	int kosuu;
	int random[kosuu];
    int max;
    
    srand((unsigned)time(NULL));

	printf("ランダムに生成する整数の個数は?: ");
	scanf("%d", &kosuu);
	printf("%d個の整数をランダムに生成します。\n", kosuu);

	for(int i = 0; i < kosuu; i++){
		random[i] = 1 + rand() % 53;
        printf("%d,", random[i]);
	}

    printf("\n");
    
	max = random[0];

	for(int j = 0; j < kosuu; j++){
        if(random[j+1] > max){
            max = random[j+1];
        }
    }

	printf("最大値は%dです。\n", max);

	return 0;
}

