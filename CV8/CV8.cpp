// CV8.cpp : Defines the entry point for the application.
//

#include "CV8.h"
#include "prunik.h"
#include <stdio.h>
using namespace std;

int main()
{
	double zacatek1, konec1, zacatek2, konec2;
	double vysl_zacatek, vysl_konec;

	printf("Zadaj 1. interval: ");
	scanf_s("%lf %lf", &zacatek1, &konec1);
	printf("Zadaj 2. interval: ");
	scanf_s("%lf %lf", &zacatek2, &konec2);

	int prienik = prunik(zacatek1, konec1, zacatek2, konec2, &vysl_zacatek, &vysl_konec);
	tiskSeg(zacatek1, konec1, zacatek2, konec2);
	if (prienik) printf("Prunik: {%.1lf %.1lf}", vysl_zacatek, vysl_konec);
	else printf("Nemaju prunik.");
}
