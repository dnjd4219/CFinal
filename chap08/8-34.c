#include <stdio.h>
int power(int num, int result){
	if(num == 0)
		return result;
	 
	result *= 2;

	power(num - 1, result);
}

 

void main(){
	int x;

	 

	printf("정수 입력 : ");
	scanf("%d", &x);

	 

	printf("2의 %d승은 %d\n", x, power(x, 1));
}
