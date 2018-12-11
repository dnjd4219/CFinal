#include <stdio.h>
#include <stdlib.h>

#define PI	3.141592

double SphereVolume(double );

int main(){
	double r;
	printf("구의 부피구하는 함수 만들기\n");
	printf("반지름 : ");
	scanf("%lf",&r);
	
	printf("구의 부피 : %lf\n",SphereVolume(r));
	
	return 0;
}

double SphereVolume(double r)
{
	double result;
	
	result=r*r*r*PI*4/3;
	
	return result;
}
