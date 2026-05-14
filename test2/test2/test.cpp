#include <stdio.h>

int main(void) {

    const char *reel[] = {
        "rep",
        "bel",
        "che",
        "[7]"
    };
    int size = sizeof(reel) / sizeof(reel[0]);
    int window_size = 3;

    int start = 0;
    int count = 0;

    while (1) {

        for (int i = 0; i < window_size; i++) {
            int index = (start + i) % size;
            printf("%s\n", reel[index]);
        }
        printf("\n");

        start = (start + 1) % size;

        count++;
        if (count >= 10) {
            break;
        }

    }
    return 0;
}