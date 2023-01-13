#include <stdio.h>
#define MAX 10000// 素数を探す最大値
#define TRUE 1 // アルゴリズム上の true の代わり
#define FALSE 0 // アルゴリズム上の false の代わり
int main(void){
    int sieve[MAX+1]; // sieve[i]が TRUE の時 i を素数とする配列
    // 配列の大きさは最大の素数より 1 大きい
    sieve[0] = FALSE; // sieve[0]は使わないが念のため FALSE にする
    sieve[1] = FALSE; // 1 番目の要素に false を
    for (int i=2; i<=MAX; i++) {
        sieve[i] = TRUE;// 2 番目以降の要素に true を入れる
    }
    // ふるい落とし開始
    for (int p=2; p<=MAX; p++){
        if (sieve[p] == TRUE) { // p が素数ならば
            for(int i=2; p*i<=MAX; i++) {
                sieve[p*i] = FALSE; // p*2, p*3,... は素数ではない
            }
        }
    }
     // 素数のリストを表示
    printf("%d までの素数の一覧\n",MAX);
    int count=0;
    for (int i=2; i<=MAX; i++) {
        if (sieve[i] == TRUE) {
        printf("%d ",i);
        count++;
        }
    }
    printf("\n2 から%d までに素数は%d 個ありました\n",MAX,count);
}
