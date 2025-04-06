#include <stdio.h>

main()
{
	int c, lc;

	lc = 0;
	while ((c = getchar()) != EOF) {
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lc != ' ')
				putchar(c);
		lc = c;
	}
}
		
