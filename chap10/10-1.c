#include <stdio.h>
#include <math.h>
double SphereVolume(double );

int main(){
	double cm;
	printf("구 반지름: ");
	scanf("%lf",&cm);
	printf("%lf\n",SphereVolume(cm));
}
double SphereVolume(double cm){
	return (4/3)*M_PI*cm*cm*cm; 
}
