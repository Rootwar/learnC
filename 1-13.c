#include <stdio.h>

int main(void) 
{   
    //*** Variable block ***//
    int wordCount[10];
    int c, i, t, wordLength, maxWordCount;
    //--- Variable block ---//

    for (i = 0; i < 10; ++i)
        wordCount[i] = 0;
    
    wordLength = maxWordCount = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' ||  c == ' ') {
            wordCount[wordLength - 1] = ++wordCount[wordLength - 1];
            wordLength = 0;
        } else {
            ++wordLength;
        }
    }

    //*** Horizontal version render ***//
    for (i = 0; i < 10; ++i) {
        printf("%2d | ", i + 1);

        for (t = 0; t < wordCount[i]; ++t) {
            if (t > maxWordCount) {
                maxWordCount = t;
            } 
            
            printf("%s", "+");
        }
        printf("\n");
    }
    //--- Horizontal version render ---//

    //*** Version divider render ***//
    printf("\n");
    printf("\n");
    printf("\n");
    //--- Version divider render ---//

    //*** Vertical version render ***//
    for (i = maxWordCount + 1; i >= 1; --i) {
        printf("%2d | ", i);

        for (t = 0; t < 10; ++t) {
            if (wordCount[t] >= i) {
                printf("%s ", "+");
            } else {
                printf("%s ", " ");
            }
        }

        printf("\n");
    }

    printf("   %s\n", "+---------------------");
    printf("    %s", "");

    for (i = 0; i < 10; ++i ) {
        printf(" %d", i + 1);
    }
    //--- Vertical version render ---//

    printf("\n");

    return 0;
}