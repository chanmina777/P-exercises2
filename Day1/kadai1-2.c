#include <stdio.h>

int main (void){
    int kosuu;
	int seisu[kosuu];
	int max;


	printf("入力する整数の個数は?: ");  scanf("%d", &kosuu);
	printf("%dつの整数の最大値を求めます。\n", kosuu);

	for(int i = 0; i < kosuu; i++){
		printf("%d個目の値: ", i+1); 
		scanf("%d", &seisu[i]);
	}

    max = seisu[0];
    
    for(int j = 0; j < kosuu; j++){
        if(seisu[j+1] > max){
            max = seisu[j+1];
        }
    }

	printf("最大値は%dです。\n", max);

	return 0;
}

//for文で整数を複数個作る
//for文とif文で最大値を求める
