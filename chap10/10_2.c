#include <stdio.h>
#include <stdlib.h>

void user_upper(char *, int);

int main(){
    FILE *ifp;
    char str[100];

    ifp = fopen("a.txt", "r");
    if(ifp==NULL){
        printf("파일 개방 실패.\n");
        return 1;
    }
    printf("%s\n", fgets(str, sizeof(str), ifp));
    fclose(ifp);
    printf("-----------------------------------\n");
    user_upper(str, sizeof(str));
    printf("%s\n", str);

    ifp = fopen("a.txt", "w");
    if(ifp==NULL){
        printf("파일 개방 실패.\n");
        return 1;
    }
    fputs(str, ifp);
    fclose(ifp);

    return 0;
}

void user_upper(char ap, int a){
    int i;
    for(i=0; i<a; i++){
        if(ap >= 'a' && *ap<='z'){
           *ap += ('A'- 'a');
        }
        ap++;
    }
}
