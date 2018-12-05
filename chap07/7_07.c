#include <stdio.h>

int main()
{
	int ary[5][5]={{4,5,7,8,9},{5,2,4,6,2},{4,7,8,5,2},{3,5,8,9,6},{7,5,6,9,8}};
	int *p1, *p2;

	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d ", ary[i][j]);
		}
		printf("\n");
	}

	printf("=========================================\n");

	int (*a)[5];
	a = (int **)ary;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(i > 5/2)
				printf("%d ", ary[i][j]);
			else
				printf("%d ", ary[j][i]);
		}
		printf("\n");
	}

	return 0;
}
