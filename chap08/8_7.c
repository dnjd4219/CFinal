#include <stdio.h>
#include <stdlib.h>

int get(int, int);

int main(){
	
	int x,y,num;

	printf("정수 입력 : ");
	scanf("%d",&x);

	printf("정수 입력 : ");
	scanf("%d",&y);

	num=get(x,y);

	printf("두 수 사이의 합 : %d\n",num);

	return 0;
}

int get(int x, int y){

	int num=0,temp=0,i;

	if(x+1 == y || y+1 == x){
		return 0;
	}
	else{
		
		if(x > y){
			temp=y;
			y=x;
			x=temp;	
		}	
		
		for(i=x+1;i<y;i++){
			num+=i;
		}

	}

	return num;
}
