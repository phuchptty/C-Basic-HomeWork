#include <stdio.h>
#include <stdlib.h>

void main() {
    FILE *f = fopen("SO_NGUYEN.DAT", "r");

    int c;

    while (fscanf(f, "%d", &c) != EOF) {

        printf("%d \n", c);
    }

    fclose(f);
}