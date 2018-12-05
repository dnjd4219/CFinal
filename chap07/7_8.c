#include <stdio.h>
#include <stdlib.h>

int main(){

	char st[100];
	char *str;
	int aph=0,els=0;
	
	printf("영어 문장을 입력하시오 : ");
	gets(st);
	printf("%s\n",st);
	
	str=st;

	while(1){
		if(*str>='a' && *str<='z' || *str>='A' && *str<='Z'){
			aph++;
	
		}
		else if(*str == '\n' || *str == '\0'){
			break;
		}
		else{
			els++;
		}
		str++;
	}

	printf("영어 숫자의 개수 : %d\n",aph);

	printf("공백 또는 구두문자의 개수 : %d\n",els); 
}
