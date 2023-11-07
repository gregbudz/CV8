#include <stdio.h>
int prunik(double zacatek1, double konec1, double zacatek2, double konec2, double* vysl_zacatek, double* vysl_konec)
{
	int temp;
	if (zacatek1 > konec1)
	{
		temp = zacatek1;
		zacatek1 = konec1;
		konec1 = temp;
	}
	if (zacatek2 > konec2)
	{
		temp = zacatek2;
		zacatek2 = konec2;
		konec2 = temp;
	}

	if (zacatek2 > konec1 || zacatek1 > konec2) return 0;

	*vysl_zacatek = (zacatek1 >= zacatek2) ? zacatek1 : zacatek2;
	*vysl_konec = (konec1 <= konec2) ? konec1 : konec2;
	return 1;
}

void tiskSeg(double zacatek1, double konec1, double zacatek2, double konec2)
{
	printf("Seg. 1: %.2lf ---> %.2lf\n", zacatek1, konec1);
	printf("Seg. 2: %.2lf ---> %.2lf\n", zacatek2, konec2);
}
