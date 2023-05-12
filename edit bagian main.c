#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maksimal_documen 5
#define maksimal_kata 10000

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s documen1.txt documen2.txt documen3.txt documen4.txt documen5.txt\n", argv[0]);
        return 1;
    }

    int num_doc = argc - 1;
    if (num_doc > maksimal_documen) {
        printf("Error: too many input documents (maximum is %d)\n", maksimal_documen);
        return 1;
    }

