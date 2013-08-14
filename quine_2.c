#include <stdio.h>
int main (void) { char* s="#include <stdio.h>%cint main (void) { char* s=%c%s%c; printf(s, 0x0A, 0x22, s, 0x22, 0x0A); return 0; }%c"; printf(s, 0x0A, 0x22, s, 0x22, 0x0A); return 0; }
