#include <stdio.h>
#include <stdlib.h>

//반올림을 구하는 함수를 작성하여라, 정수값을 주고 어느 자리에서 반올림할 것인지를 넘겨주면 원하는 자리에서 반올림하여 돌려받는다. 

int chainge(int , int );

int main(){
	
	int num,updown;
	
	printf("정수 값을 입력 하세요 : ");
	scanf("%d",&num); 
	
	printf("어느 자리에서 반올림할 것인지 입력(ex 1,10,100...) : ");
	scanf("%d",&updown);
	
	num=chainge(num,updown);
	
	if(num==0){
		printf("반올림할 값이 큽니다.\n");
	}
	else{
		printf("결과 : %d",num);
	}
	
	return 0;
}

int chainge(int num, int updown){
	
	int temp,temp1,updown1;
	updown1=updown*10;
	temp=num%updown1;
	temp1=num-temp;
		
	if(temp>=5*updown){
		num=temp1+10*updown;
	}
	else{
		num=temp1;
	}
	
	return num;
}
