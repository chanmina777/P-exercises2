#include <stdio.h>

//2つの変数の値を交換する関数
void swap2(int  *x, int  *y){
    int tmp = *x;
    *x = * y;
    *y = tmp;
    return;
}

//3つの値を小さい順から順に並び替える関数
void sort3(int *n1, int *n2, int *n3){
    if(*n1 > *n2){
        swap2(n1, n2);
    }
    if(*n1 > *n3){
        swap2(n1, n3);
    }
    if(*n2 > *n3){
        swap2(n2, n3);
    }
    return;
}

//intの配列を表示する(nは個数)
void print_array(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    putchar('\n');
    return;
}

int main(void){
    int ary[3] = {0};
    puts("3つの値を入力します");
    for(int i = 0; i < 3; i++){
        printf("%dつ目",i+1);
        scanf("%d",&ary[i]);
    }
    puts("\nソート前");
    print_array(ary, 3);

    sort3(&ary[0], &ary[1], &ary[2]);
    puts("ソート後");
    print_array(ary, 3);
    return 0;
}
