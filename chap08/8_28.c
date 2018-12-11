#include <stdio.h>
#include <stdlib.h>

//몫과 나머지를 구하는 함수를 작성하라. 몫은 함수의 결과로 받고 나머지는 포인터로 받도록한다. 

double re(int, int, int *); 

int main(int argc, char *argv[]) {
	
	int i,o,q;
	int w;
	
	printf("정수를 입력 : ");
	scanf("%d",&i); 
	printf("나눌 값을 입력 : ");
	scanf("%d",&o);
	
	q=re(i,o,&w);
	
	printf("몫:%d 나머지:%d",q,w);
	
	return 0;
}

double re(int i, int o, int *w){
	
	*w=i%o;

	return i/o;
}
