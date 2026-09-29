#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int count = 5;
    int *numbers = malloc(count * sizeof *numbers);

    if (numbers == NULL) {
        return 1;
    }

    for (int i = 0; i < count; i++) {
        numbers[i] = i + 1;
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}