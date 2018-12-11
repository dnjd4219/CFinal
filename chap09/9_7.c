#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member{
	char name[20];
	char part[20];
	char rank[20];
	int honor;
}M;

int main(){
	
	int i,o,p,q;
	int str[40]; // 호봉 
	int str1[40]; // 호봉에 따른 본봉 
	char str2[10][20];
	int str3[10];
	char str4[20];
	int sum;
	
	M m[10];
	
	for(i=0;i<40;i++){
		str[i]=i+1;
	}
	
	for(i=0;i<40;i++){
		str1[i]=i+1; 
	}
	
	for(i=0;i<10;i++){
		if(i==0){
			strcpy(str2[i],"인턴");
		}
		else if(i==1){
			strcpy(str2[i],"경리");
		}
		else if(i==2){
			strcpy(str2[i],"사원");
		}
		else if(i==3){
			strcpy(str2[i],"대리");
		}
		else if(i==4){
			strcpy(str2[i],"과장");
		}
		else if(i==5){
			strcpy(str2[i],"차장");
		}
		else if(i==6){
			strcpy(str2[i],"부장");
		}
		else if(i==7){
			strcpy(str2[i],"상무");
		}
		else if(i==8){
			strcpy(str2[i],"전무");
		}
		else if(i==9){
			strcpy(str2[i],"사장");
		}	
	}
	
	for(i=0;i<10;i++){
		str3[i]=i+1;
	}
	
	strcpy(m[0].name,"1");
	strcpy(m[0].part,"1");
	strcpy(m[0].rank,"인턴");
	m[0].honor=1;
	
	strcpy(m[1].name,"2");
	strcpy(m[1].part,"2");
	strcpy(m[1].rank,"경리");
	m[1].honor=2;
	
	strcpy(m[2].name,"3");
	strcpy(m[2].part,"3");
	strcpy(m[2].rank,"사원");
	m[2].honor=3;
	
	strcpy(m[3].name,"4");
	strcpy(m[3].part,"4");
	strcpy(m[3].rank,"대리");
	m[3].honor=4;
	
	strcpy(m[4].name,"5");
	strcpy(m[4].part,"5");
	strcpy(m[4].rank,"과장");
	m[4].honor=5;
	
	strcpy(m[5].name,"6");
	strcpy(m[5].part,"6");
	strcpy(m[5].rank,"차장");
	m[5].honor=6;
	
	strcpy(m[6].name,"7");
	strcpy(m[6].part,"7");
	strcpy(m[6].rank,"부장");
	m[6].honor=7;
	
	strcpy(m[7].name,"8");
	strcpy(m[7].part,"8");
	strcpy(m[7].rank,"상무");
	m[7].honor=8;
	
	strcpy(m[8].name,"9");
	strcpy(m[8].part,"9");
	strcpy(m[8].rank,"전무");
	m[8].honor=9;
	
	strcpy(m[9].name,"10");
	strcpy(m[9].part,"10");
	strcpy(m[9].rank,"사장");
	m[9].honor=10;
	
	
	while(1){
		sum=0;
		printf("1.월급 계산 2.종료\n");
		printf("입력 : ");
		scanf("%d",&o);
		
		if(o==1){
			printf("월급\n");
			printf("이름 입력 : ");
			fflush(stdin);
			gets(str4);
			
			for(i=0;i<10;i++){
				if(strcmp(str4,m[i].name)==0){
					sum+=str1[m[i].honor-1];
					for(q=0;q<10;q++){
						if(strcmp(str2[q],m[i].rank)==0){
							sum+=str3[q];
							break;
						}
					}
					break;
				}
			}
			printf("해당 직원의 월급은 : %d\n",sum);
		}
		else if(o==2){
			printf("종료\n");
			break;
		}
	}
	return 0;
}
