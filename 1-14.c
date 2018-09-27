#include <stdio.h>

int main(void)
{	
	int c, i, t;
	int charsCount[93];

	for (i = 0; i <= 93; ++i) {
		charsCount[i] = 0;
	}

	 while ((c = getchar()) != EOF) {
        if (c != '\n' || c != '\t' ||  c != ' ') {
			++charsCount[c - '!'];
        }
    }

	//*** Vertical version render ***//
    for (i = 93; i > 0; --i) {
        printf("%2d | ", i);

        for (t = 0; t <= 93; ++t) {
            if (charsCount[t] >= i) {
                printf("+ ");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("   +");
	for (i = 0; i <= 93; ++i)
        printf("--");
    printf("\n     ");

    for (i = '!'; i <= '~'; ++i) {
		putchar(i);
		printf(" ");
	}
    //--- Vertical version render ---//

    printf("\n");

	return 0;
}
