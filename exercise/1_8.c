#include <stdio.h>

main()
{
	int c, b, t, nl;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++b;
		if (c == '\t')
			++t;
		if (c == '\n')
			++nl;
	}
	printf("B: %d\tT:%d\tNL:%d\n", b, t, nl);
}
