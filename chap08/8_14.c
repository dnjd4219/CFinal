#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,r,i,num=1;

	printf("원소를 입력 : ");
	scanf("%d",&n);

	printf("선택 수량 입력 : ");
	scanf("%d",&r);

	i=n;
	while(1){
	
		if(i==n-r){
			break;
		}
		else{
			num=num*i;
			i=i-1;
		}
	}

	printf("결과 : %d\n",num);
}
