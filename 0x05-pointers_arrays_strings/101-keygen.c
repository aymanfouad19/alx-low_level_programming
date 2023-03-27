#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LEN 61
int main(void)
{
char password[PASSWORD_LEN + 1]; /* +1 for null terminator */
int i, sum, diff, last;
srand(time(NULL));
for (i = 0, sum = 0; sum < PASSWORD_LEN - 122 || sum > PASSWORD_LEN; i++)
{
password[i] = rand() % 94 + 33;
sum += password[i];
}
password[i] = '\0';
if (sum != PASSWORD_LEN)
{
last = password[i - 1];
diff = sum - PASSWORD_LEN;
if (last - diff >= 33 && last - diff <= 126)
password[i - 1] -= diff;
else
password[i - 2] -= diff;
}
printf("%s", password);
return (0);
}
