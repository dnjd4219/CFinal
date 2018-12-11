#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Birthday(char *); //생년월일 나누어 출력하는 함수
void Sex(char *); //성별구분하는 함수

int main(){
	char firstNum[10],lastNum[10];
	
	printf("주민번호 입력(xxxxxx-xxxxxxx)\n");
	scanf("%6s-%s",firstNum,lastNum);
	printf("----------------------------\n");
	printf("first:%s\n",firstNum);
	printf("last:%s\n",lastNum);
	
	Birthday(firstNum);
	Sex(lastNum);
	
	return 0;
}

void Birthday(char *str)
{
	int i;
	
	for(i=0;i<strlen(str);i++){
		printf("%c",str[i]);
		switch(i){
			case 1:
				printf("년 ");
				break;
			case 3:
				printf("월 ");
				break;
			case 5:
				printf("일\n");
				break;
		}
	}
}

void Sex(char *str)
{
	if(str[0]=='1')printf("남자\n");
	else printf("여자\n");
}