#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    
    FILE* input;
    if (argc < 2) {
        printf("File name missing!\n");
        exit(1);
    }

    input = fopen(argv[1], "r");
    int ch;
    int lineCount = 0;
    int byteCount = 0;


    while((ch = getc(input)) != EOF) {
 	byteCount += 1;
  	if (ch == '\n') 
            lineCount += 1;
    }
    fclose(input);

    printf("#lines:%i, #bytes: %i\n", lineCount, byteCount);
    return 0;
}
