#include<stdio.h>

// C File handling
// 1. Stream-oriented data files - the data is stored in the same manner as it appears on the screen 
// 2. System-oriented data files - the data files are more clesely associated with the OS

// C file operations 
// creation of a new file, opening, readig, writing data in a file, closing a file.

// Steps for Processing a File
// 1. Declare a file pointer varioble
// 2. Open a file using fopen()
// 3. Precess the file using the suitable function
// 4. Close the file using fclose() function

// fopen, fclose, getc, putc, getw, putw, fprintf, fscanf, fgets, fputs, feof
int main()
{
    FILE *fp;
    fp = fopen("filename.txt", "w");
    // precessing of the files
    fprintf(fp, "%s", "Hello World");
    // end of processing
    fclose(fp);
    return 0;
}