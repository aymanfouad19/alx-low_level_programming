#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LEN 26
int main(void)
{
char password[PASSWORD_LEN + 1]; // +1 for null terminator
int i;
srand(time(NULL)); // initialize random number generator
for (i = 0; i < PASSWORD_LEN; i++) {
password[i] = rand() % 94 + 33; // generate random printable ASCII character
}
password[PASSWORD_LEN] = '\0'; // add null terminator
printf("%s\n", password); // print password
return 0;
}
