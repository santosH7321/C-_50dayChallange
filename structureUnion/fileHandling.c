#include <stdio.h>

int main() {
    // File pointer declaration
    FILE *fp;

    // Open file in write mode
    fp = fopen("example.txt", "w");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to the file
    fprintf(fp, "Hello, File Handling in C!\n");

    // Close the file
    fclose(fp);

    return 0;
}
