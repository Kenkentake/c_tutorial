#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

void main() {
    FILE *file;
    char line[SIZE];
    line[0] = '\0';
    file = fopen("test/sample.txt", "r");
    if (file == NULL) {
        printf("ファイルが開ません。\n");
        exit(1);
    }
    while ( fgets(line, SIZE, file) != NULL ){
        printf("%s", line);
    }
    fclose(file);
}
