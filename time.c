#include <stdio.h>
#include <time.h>

main(){
int i, j, k;
float x;
clock_t start = clock();

// sleep(20);
for (k = 0; k < 100; k++)
for (j = 0; j < 10000; j++)
for (i = 0; i < 10000; i++)
   x = 25.55 * 50 / 49.88;

printf("Time elapsed: %f seconds\n",  ((double) clock() - start) /
CLOCKS_PER_SEC);
}

