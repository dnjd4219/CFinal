#include <stdio.h>

void print_string(char, int, int);

int main()
{
	char ch;
	int cnt, enter;

	printf("입력할 문자 입력 : ");
	scanf("%c", &ch);
	printf("한 줄에 출력할 개수 입력 : ");
	scanf("%d", &cnt);
	printf("출력할 줄 수 입력 : ");
	scanf("%d", &enter);

	print_string(ch, cnt, enter);

	return 0;
}

void print_string(char ch, int cnt, int enter)
{
	for(int i=0; i<enter; i++){
		for(int j=0; j<cnt; j++){
			printf("%c", ch);
		}
		printf("\n");
	}
}
