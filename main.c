#include <stdio.h>
#include "mp3tag.h"
#include "tag_utils.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <mp3 file>\n", argv[0]);
        return 1;
    }

    int choice;
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        handleChoice(choice);
    }

    MP3Tag tag;
    readMP3Tag(argv[1], &tag);
    printMP3Tag(&tag);

    return 0;
}
