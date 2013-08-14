#include <stdio.h>

char* source[] = {
    "#include <stdio.h>",
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
    "",
    "    printf(\"%s%c\", source[0], newline);",
    "    printf(\"%s%c\", source[1], newline);",
    "    printf(\"%s%c\", source[2], newline);",
    "",
    "    while (*line) {",
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
    "    }",
    "    for (line = source + 3; *line; line++) {",
    "        printf(\"%s%c\", *line, newline);",
    "    }",
    "}",
};

int main (void) {
    char newline = 012;
    char quote = 042;
    char escape = 0134;
    char* character;
    char** line = source;

    printf("%s%c", source[0], newline);
    printf("%s%c", source[1], newline);
    printf("%s%c", source[2], newline);

    while (*line) {
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
    }
    for (line = source + 3; *line; line++) {
        printf("%s%c", *line, newline);
    }
}
