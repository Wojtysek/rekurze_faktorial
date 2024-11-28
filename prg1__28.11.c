#include <stdio.h>
#include <float.h>

double x = 0;

double fact(double x) {

	if (x <= 1) {
		return 1;
	}

	double vysledek = fact(x - 1);

	if (vysledek > DBL_MAX / x) {
		printf("chyba: prekrocil se limit datoveho typu\n");
		return -1;
	}
	
	return vysledek * x;
}

int main() {

	printf("zadejte cislo: ");
	scanf("%lf", &x);
	printf("\n\r");

	if (x < 0) {
		printf("nelze vypocitat zaporne hodnoty. zadejte jinou hodnotu\n");
		return 1;
	}


	double vysledek = fact(x);

	if (vysledek == -1) {
		return 0;
	}

	
	if (vysledek < 1e9 && vysledek >= 0) {
		printf("faktorial z %.0lf: %.0lf\n\r", x, vysledek);
	}
	else if (vysledek >= 0) {
		printf("Factorial z %.0lf: %e\n\r", x, vysledek);
	}
	
}