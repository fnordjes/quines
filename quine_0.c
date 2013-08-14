/*
	This is a program that prints it's own source.
*/
#include <stdio.h>

int main (void) {
	char *string = "/*%c%cThis is a program that prints it's own source.%c*/%c#include <stdio.h>%c%cint main (void) {%c%cchar *string = %c%s%c;%c%cchar newline = '%cn';%c%cchar tab = '%ct';%c%cchar quote = '%c';%c%cchar backslash = '%c%c';%c%c%cprintf(string, newline, tab, newline, newline, newline, newline, newline, tab, quote, string, quote, newline, tab, backslash, newline, tab, backslash, newline, tab, quote, newline, tab, backslash, backslash, newline, newline, tab, newline, newline, tab, newline, newline);%c%c%creturn 0;%c}%c";
	char newline = '\n';
	char tab = '\t';
	char quote = '"';
	char backslash = '\\';

	printf(string, newline, tab, newline, newline, newline, newline, newline, tab, quote, string, quote, newline, tab, backslash, newline, tab, backslash, newline, tab, quote, newline, tab, backslash, backslash, newline, newline, tab, newline, newline, tab, newline, newline);

	return 0;
}
