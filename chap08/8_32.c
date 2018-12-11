#include <stdio.h>
#include <stdlib.h>

int expone(int, int);

int main()
{
    int a, b;

    printf("계수 지수 입력 : ");
    scanf("%d %d", &a, &b);
    printf("%d\n", expone(a,b));

    return 0;
}

int expone(int a, int b){
    int i;
    int temp=a;

    printf("%d %d\n", a, b);
    for(int i = 1; i < b; i++){
        temp*=a;
    }

    return temp;
}
