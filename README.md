**MP3 Tag Reader**

The MP3 Tag Reader is a command-line application that extracts and displays ID3v1 tags from MP3 files. The tags include information such as the title, artist, album, year, comment, and genre of the MP3 file.


## Compilation and Execution:  
To compile the MP3 Tag Reader, follow these steps:

1. Open a terminal.
2. Navigate to the directory containing the source files.
3. Compile the source files using the following commands:

    gcc -c main.c mp3tag.c file_utils.c tag_utils.c
    gcc -o mp3tagreader main.o mp3tag.o file_utils.o tag_utils.o
 4.For Execution: ./mp3tagreader song.mp3

**Build with**  
 1. C Progrmming Language
 2. Ubuntu
 3. Vim Editor

**Author**  

Hiregoudru Malegouda  

**Acknowldgement**  

Emertxe Information Technologies Pvt. Ltd - for providing idea of this project
