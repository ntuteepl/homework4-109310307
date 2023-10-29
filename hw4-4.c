#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

//hw4-4
int main()
{
int n;
scanf("%d", &n);

int array[n][n];
if(n >= 1 && n <= 10)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &array[i][j]);
    }
}

for (int k = 0; k < n; k++)
{
    int max = array[0][0];
    int maxRow = 0;
    int maxCol = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    printf("boy %d pair with girl %d\n", maxRow + 1, maxCol + 1);

    for (int i = 0; i < n; i++)
    {
        array[i][maxCol] = -1;
        array[maxRow][i] = -1;
    }

}

}

