#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp;
	char inpu[100], temp[100];
	char  number[100];
	int a, b = 1;
	while(b != 0){
		printf("1. 이름으로 검색\n2.전화번호로 검색\n3.종료\n");
		scanf("%d", &a);
		fflush(stdin); 
		fp = fopen("phone.txt", "r"); 
		int d = 0, r;
		switch(a){
			case 1:
				printf("검색할 이름을 검색하세요\n");
				scanf("%s", inpu);
				printf("%s\n", inpu);
				while(!feof(fp)){
					fscanf(fp, "%s %s\n", temp, number);
					if (feof(fp)) break;
					if(strcmp(inpu, temp) == 0){ 
						printf("이름 : %s, 전화번호 : %s\n", temp, number);
						d++;
						break;
					} 
				} 
				if(d == 0) printf("검색된 이름을 찾을 수 업습니다.\n");
				break;
				
			case 2 :  
				printf("검색할 전화번호를 검색하세요\n"); 
				scanf("%s", inpu); 
				while(!feof(fp)){
					fscanf(fp, "%s %s\n", temp, number); 
					if(strcmp(inpu, number) == 0){
						printf("이름 : %s, 전화번호 : %s\n", temp, number);
						d++;
						break;
					}
				}
				if(d == 0) printf("검색된 전화번호를 찾을 수 업습니다.\n");
				break;
				
			case 3:
				b = 0;
				break;
				
			default:
				printf("not fount number");
				break;
		} 
		fclose(fp);
	} 
} 
 
