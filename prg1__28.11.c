#include <stdio.h>
#include <float.h>

double x = 0;

double fact(double x) {

	if (x <= 1) {
		return 1;
	}

	double vysledek = fact(x - 1);

	if (vysledek > DBL_MAX / x) {
		return -1;
	}
	
	return vysledek * x;
}

int main() {

	printf("zadejte cislo: ");
	scanf("%lf", &x);
	printf("\n\r");

	double vysledek = fact(x);

	if (vysledek == -1) { //ukoncit program pokud je vysledek prilis veliky
		printf("vysledek prekrocil limit datoveho typu");
		return 1;
	}

	if (vysledek < 1e9) {
		printf("faktorial z %.0lf: %.0lf\n\r", x, vysledek);
	}
	else {
		printf("Factorial z %.0lf: %e\n\r", x, vysledek);
	}

}