#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//hw4-2
int main()
{
int matrix[6][3] =
{
    {123, 456, 9000},
    {456, 789, 5000},
    {789, 888, 6000},
    {336, 558, 10000},
    {775, 666, 12000},
    {566, 221, 7000}
};

int n, a, b;
scanf("%d", &n);
for(int i = 0; i < n; i++)
{
    scanf("%d %d", &a, &b);
    int found = 0;
    for(int j = 0; j < 6; j++)
    {
        if(a == matrix[j][0] & b == matrix[j][1])
        {
            printf("%d\n", matrix[j][2]);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("error\n");
}
}
