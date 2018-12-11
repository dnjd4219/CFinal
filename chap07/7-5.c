#include <stdio.h>
void whatday(int *,int ,int );
int main(){
	int days[13] = {0,31,29,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	printf("년/월/일 입 력: ");
	scanf("%d%d%d",&y,&m,&d);
	whatday(days,m,d);
	return 0;
}
void whatday(int *a,int m,int d){
	int i=0;
	int result=0;
	for(i=0;i<m;i++){
		result += a[i];
	}
	result += d;
	printf("%d\n",result);
}
