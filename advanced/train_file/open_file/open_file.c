#include <stdio.h>
#include <stdlib.h> 
void main() {
    FILE *file;
    file = fopen("test/sample.txt", "w"); 
    if (file == NULL) {
        printf("ファイルが開きません。\n");
        exit(1);
    }
    fprintf(file,"Hello World.\r\n");
    fprintf(file,"ABCDEFG\r\n");
    fclose(file);
}
