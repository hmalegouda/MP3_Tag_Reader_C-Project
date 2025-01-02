#ifndef MP3TAG_H
#define MP3TAG_H

typedef struct {
    char title[30];
    char artist[30];
    char album[30];
    char year[4];
    char comment[30];
    char genre;
} MP3Tag;

void readMP3Tag(const char *filename, MP3Tag *tag);
void printMP3Tag(const MP3Tag *tag);

#endif // MP3TAG_H
