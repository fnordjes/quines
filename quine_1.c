#include <stdio.h>
#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))

char* source[] = {
    "#include <stdio.h>",
    "#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))",
    "",
    "char* source[] = {",
    "};",
    "",
    "int main (void) {",
    "    char newline = 012;",
    "    char quote = 042;",
    "    char escape = 0134;",
    "    char* character;",
    "    char** line = source;",
    "    char lines = ARRAY_SIZE(source);",
    "    char count = 0;",
    "",
    "    printf(\"%s%c\", source[0], newline);",
    "    printf(\"%s%c\", source[1], newline);",
    "    printf(\"%s%c\", source[2], newline);",
    "    printf(\"%s%c\", source[3], newline);",
    "",
    "    while (count < lines) {",
    "        printf (\"    %c\", quote);",
    "        character = *line;",
    "        while (*character) {",
    "            if (*character == quote) {",
    "                putchar(escape);",
    "            }",
    "            putchar(*character);",
    "            character++;",
    "        }",
    "        printf(\"%c,%c\", quote, newline);",
    "        line++;",
    "        count++;",
    "    }",
    "    for (count = 4, line = source + 4; count < lines; count++, line++) {",
    "        printf(\"%s%c\", *line, newline);",
    "    }",
    "    printf(\"%c\", newline);",
    "}",
};

int main (void) {
    char newline = 012;
    char quote = 042;
    char escape = 0134;
    char* character;
    char** line = source;
    char lines = ARRAY_SIZE(source);
    char count = 0;

    printf("%s%c", source[0], newline);
    printf("%s%c", source[1], newline);
    printf("%s%c", source[2], newline);
    printf("%s%c", source[3], newline);

    while (count < lines) {
        printf ("    %c", quote);
        character = *line;
        while (*character) {
            if (*character == quote) {
                putchar(escape);
            }
            putchar(*character);
            character++;
        }
        printf("%c,%c", quote, newline);
        line++;
        count++;
    }
    for (count = 4, line = source + 4; count < lines; count++, line++) {
        printf("%s%c", *line, newline);
    }
    printf("%c", newline);
}
