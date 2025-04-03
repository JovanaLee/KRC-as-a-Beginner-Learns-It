#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	
	while (celsius <= upper) {
		fahr = celsius *(9/5) + 32;
		printf("%d\t%d\n", fahr, celsius);
		celsius = celsius + step;
	}
}
