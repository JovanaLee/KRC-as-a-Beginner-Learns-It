#include <stdio.h>

/* Not exactly sure what it means to replace each x by \x but here's my impression of it */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t')
			printf("|tab|");
		if (c == '\b')
			printf("|backspace");
		if (c == '\\')
			printf("|backslash|");
		if (c != '\t')
			if (c != '\b')
				if (c != '\\')
					putchar(c);
	}
}
