#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mp3tag.h"
#include "file_utils.h"

void readMP3Tag(const char *filename, MP3Tag *tag) {
    FILE *file = openFile(filename, "rb");
    if (!file) return;

    fseek(file, -128, SEEK_END);
    char tagHeader[3];
    fread(tagHeader, sizeof(char), 3, file);

    if (strncmp(tagHeader, "TAG", 3) != 0) {
        fprintf(stderr, "No ID3 tag found.\n");
        fclose(file);
        return;
    }

    fread(tag->title, sizeof(char), 30, file);
    fread(tag->artist, sizeof(char), 30, file);
    fread(tag->album, sizeof(char), 30, file);
    fread(tag->year, sizeof(char), 4, file);
    fread(tag->comment, sizeof(char), 30, file);
    fread(&tag->genre, sizeof(char), 1, file);

    fclose(file);
}

void printMP3Tag(const MP3Tag *tag) {
    printf("Title: %.30s\n", tag->title);
    printf("Artist: %.30s\n", tag->artist);
    printf("Album: %.30s\n", tag->album);
    printf("Year: %.4s\n", tag->year);
    printf("Comment: %.30s\n", tag->comment);
    printf("Genre: %d\n", tag->genre);
}
