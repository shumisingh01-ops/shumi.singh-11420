#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Hello";
    char s2[20] = "World";

    printf("Length: %lu\n", strlen(s1));
    strcpy(s2, s1);
    printf("Copy: %s\n", s2);
    strcat(s1, " C");
    printf("Concat: %s\n", s1);
    printf("Compare: %d\n", strcmp(s1, s2));

    return 0;
}
