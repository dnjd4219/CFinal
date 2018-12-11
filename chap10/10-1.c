#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp,*op;
	char len[100];
	fp = fopen("data.txt","r");
	op = fopen("data2.txt","w");
	while(!feof(fp)){
		fscanf(fp,"%s",len);
		fprintf(op,"%s\n\n",len);
	}
	fclose(fp);
	fclose(op);
	
	return 0;
}
