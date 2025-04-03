#include <stdio.h>

/* Proper conversions of both Fahrenheit to Celsius AND Celsius to Fahrenheit. */

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("F to C\n\n");

	for (fahr = lower; fahr <= upper; fahr = fahr + step) {
		celsius = (fahr - 32) * 5/9;
		printf("F:%d\tC:%d\n", fahr, celsius);
	}

	printf("\nC to F\n\n");

	for (celsius = lower; celsius <= upper; celsius = celsius + step) {
		fahr = (celsius * 9/5) + 32;
		printf("C:%d\tF:%d\n", celsius, fahr);
	}
}
