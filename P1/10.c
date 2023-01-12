#include <stdio.h>

//文字列の長さを得る関数
int len(const char s[]){
    int i = 0;

    while (s[i] != '\0'){ //null文字が出てくるまで
        i++;
    }
    return i;
}

//文字列の文字を反転させる関数
int rev(char s[]){
    int length = len(s);

    for(int i = 0; i < (length/2); i++){
        char temp = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = temp;
    }
}

int main(void){
    char dat[][8] = {"Pink", "Black", "Gold", "Gray", "Orange"};

    puts("Stage 1");
    for(int i = 0; i < 5; i++){
        printf("%s\n",dat[i]);
    }
    puts("-----");
    puts("Stage 2");
    for(int i = 0; i < 5; i++){
        dat[i][0] += 3;
        printf("%s\n",dat[i]);
    }
    puts("-----");
    puts("Stage 3");
    for(int i = 0; i < 5; i++){
        rev(dat[i]);
        printf("%s\n",dat[i]);
    }
    return 0; 
}

/*
これを実行するとこのような出力が得られた。
Stage 1
Pink
Black
Gold
Gray
Orange
------
Stage 2
Sink
Elack
Jold
Jray
Rrange
------
Stage 3
kniS
kcalE
dloJ
yarJ
egnarR
