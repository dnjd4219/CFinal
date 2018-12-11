#include <stdio.h>
#include <stdlib.h>

int check(int ); 

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("정수를 입력 하세요 : ");
	scanf("%d",&i);
	
	i=check(i);
	
	if(i==1){
		printf("홀수 입니다.\n");
	}
	else if(i==0){
		printf("짝수 입니다.\n");
	}
	
	return 0;
}

int check(int number){
	
	long binary,sum=0,i=1;
	
	while(number>0){
        binary=number%2;
        sum+=binary*i;
        number=number/2;
        i*=10;
	}

	printf("2진수 : %ld\n",sum);
	
	if(sum&1==0){
		return 0;
	}
	else if(sum&1==1){
		return 1;
	}
	
}
