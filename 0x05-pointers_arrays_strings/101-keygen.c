#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int password[4];
int sum = 0x5a4;
int i;
for (i = 0; i < 4; i++) {
password[i] = rand() % 57 + 1; // Random integer between 1 and 57 inclusive
sum -= password[i]; // Subtract integer from sum
}
if (sum == 0) {
printf("%c%c%c%c\n", password[0], password[1], password[2], password[3]);
} else {
main();
}
return 0;
}
