#include <stdio.h>

int main (void){
	int a, b, c, d, e;
	int min;

	printf("五つの整数の最小値を求めます。\n");
	printf("aの値: "); scanf("%d", &a);
	printf("bの値: "); scanf("%d", &b);
	printf("cの値: "); scanf("%d", &c);
	printf("dの値: "); scanf("%d", &d);
	printf("eの値: "); scanf("%d", &e);

	min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	if(d < min) min = d;
	if(e < min) min = e;

	printf("最小値は%dです。\n", min);

	return 0;
}

//入力した値を一つずつ比べていく
