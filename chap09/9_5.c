#include <stdio.h>
#include <string.h>

struct Rank{
	unsigned char Level:3;
	unsigned char Class:5;
};

union RNK{
	unsigned char rank;
	struct Rank rank_s;
};

struct Soldier{
	unsigned int SN;
	union RNK rank;
	char name[30];
	char belonging[30];
};

typedef struct Soldier soldier;

int main()
{
	soldier Array_Soldier[3] = {0,};

	Array_Soldier[0].SN = 1576029183;
	Array_Soldier[0].rank.rank_s.Level = 0;
	Array_Soldier[0].rank.rank_s.Class = 1;
	strcpy(Array_Soldier[0].name, "김원재");
	strcpy(Array_Soldier[0].belonging, "보병");

	printf("Soldier Number = %d\n", Array_Soldier[0].SN);
	printf("Level : %d\n", Array_Soldier[0].rank.rank_s.Level);
	printf("Class : %d\n", Array_Soldier[0].rank.rank_s.Class);
	printf("Name : %s\n", Array_Soldier[0].name);
	printf("belonging : %s\n", Array_Soldier[0].belonging);

	return 0;
}
