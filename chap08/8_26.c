#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Birthday(char *); //������� ������ ����ϴ� �Լ�
void Sex(char *); //���������ϴ� �Լ�

int main(){
	char firstNum[10],lastNum[10];
	
	printf("�ֹι�ȣ �Է�(xxxxxx-xxxxxxx)\n");
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
				printf("�� ");
				break;
			case 3:
				printf("�� ");
				break;
			case 5:
				printf("��\n");
				break;
		}
	}
}

void Sex(char *str)
{
	if(str[0]=='1')printf("����\n");
	else printf("����\n");
}