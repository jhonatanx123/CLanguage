#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) {
int day, year;
char weekday[20], month[20], buf[100];
strcpy( buf, "Thursday September 24 2020" );
sscanf( buf, "%s %s %d %d", weekday, month, &day, &year );
printf("%s %d, %d = %s\n", month, day, year, weekday );
return 0;
}