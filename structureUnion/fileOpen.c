#include<stdio.h>
int main(){
    
    FILE *fo;
    char word[50];

    // fo = fopen("santosh.tsx", "w");
    fo = fopen("santosh.tsx", "r");
    // fprintf(fo, "Hello santosh kumar");
    

     // Read each word from the file using fscanf()
    while (fscanf(fo, "%s", word) != EOF) {
        // Print each word to the console
        printf("%s ", word);
    }

    fclose(fo);
}