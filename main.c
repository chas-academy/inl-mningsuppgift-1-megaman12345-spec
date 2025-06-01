#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);


    int kast[100];
    int antal[6] = {0};  // antal för varje tärningssida
    int total = 0;

    
    for (int i = 0; i < 100; i++) {
        int slag = rand() % 6 + 1;
        kast[i] = slag;
        antal[slag - 1]++;
        total += slag;
    }
    for (int i = 0; i < 6; i++) {
        printf("%d\n", antal[i]); // ndast siffror, ingen text
    }

    printf("%d\n", total); // Summan
    printf("%.1f\n", (float)total / 100); // Medelvärdet, 1 Decimal
    return 0;
}
