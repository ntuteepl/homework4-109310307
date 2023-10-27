#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


//hw4-1
int main()
{
int n;
scanf("%d", &n);
assert(1 <= n && n <= 50);
int prime[n];

for(int i = 0; i < n; i++)
    scanf("%d", &prime[i]);

for(int i = 0; i < n; i++)
{
    bool YN = true;
    for(int j = 2; j < prime[i]; j++)
    {
        if (prime[i] % j == 0)
            YN = false;
    }

    if (YN == true)
        printf("YES ");
    if (YN == false)
        printf("NO ");
}

}

