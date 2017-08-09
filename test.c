#include <stdio.h>

void hmm (void);
void hmmm (void);

int main (int argc, char **argv) {
    hmm();
    hmmm();
    return -1;
}

void hmm (void) {
    printf("hmm left branch hmm\n");
}

void hmmm (void) {
    printf("hmmm");
}