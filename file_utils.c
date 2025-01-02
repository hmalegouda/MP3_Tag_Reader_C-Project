#include "file_utils.h"
#include <stdlib.h>

FILE *openFile(const char *filename, const char *mode) {
    FILE *file = fopen(filename, mode);
    if (!file) {
        perror("Unable to open file");
        exit(EXIT_FAILURE);
    }
    return file;
}
