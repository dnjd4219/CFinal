#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Book{
	char name[30];  //도서명
	int possession;  //보유권수
	int loan;  //대출권수
	char position[10];  //도서위치
}Book;

int main(){
	int i,sw=0;
	char b_name[20];
	Book book[5]={
		{"빙레기패턴분석",10,10,"가-1"},
		{"스와핑이란?",69,74,"심-112"},
		{"82kg김지영",82,0,"쿵-쾅"},
		{"호크(아바타)상향좀",16,5,"다-953"},
		{"뭘봐ㅅㅂ",0,0,"나-45"}
	};
	
	printf("검색도서명 : ");
	scanf("%s",b_name);
	
	for(i=0;i<5;i++){
		if(strcmp(b_name,book[i].name)==0){
			sw=1;
			break;
		}
	}
	if(sw){
		if(book[i].possession-book[i].loan > 0){
			printf("%s ←가져가\n",book[i].position);
		}else printf("너줄건 없다\n");
	}else printf("그딴거 없다\n");
	
	return 0;
}
