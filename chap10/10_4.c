#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    double fl=2.535;
    double temp;
    int i;
    fp = fopen("data.txt", "w");
    fprintf(fp, "%lf", fl);
    fclose(fp);

    fp = fopen("data.txt", "r");
    fscanf(fp, "%lf", &fl);
    printf("%lf\n", fl);
    fclose(fp);

    return 0;
}
