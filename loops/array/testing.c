#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int i;
    FILE *ptr;
    
    setlocale(LC_ALL, "utf-8"); // Set the locale to support UTF-8 encoding
    
    ptr = fopen("test.txt", "w");
    if (ptr == NULL) {
        printf("Error: Cannot open file.\n");
        exit(1);
    }
    
    for (i = 1; i <= 25; i++) {
        fprintf(ptr, "\n\tlove you jaan %d \u2665", i);
    }
    for (i = 26; i <= 50; i++) {
        fprintf(ptr, "\n\tlove you bachu %d \u2665", i);
    }
    for (i = 51; i <= 75; i++) {
        fprintf(ptr, "\n\tlove you darling %d \u2665", i);
    }
    for (i = 76; i <= 100; i++) {
        fprintf(ptr, "\n\tlove you gb %d \u2665", i);
    }
    
    fclose(ptr);
    
    return 0;
}
	
