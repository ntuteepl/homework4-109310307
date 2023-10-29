#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
//hw4-3
int main()
{
int time[100];
int time_n = 0;
int input;
while (time_n < 100 && scanf("%d", &input) != EOF)
{
    time[time_n] = input;
    time_n++;
}

int s[50];
int d[50];
int car = 0;
for(int i = 0; i < time_n; i+=2)
{
    s[car] = time[i];
    d[car] = time[i+1];
    car++;
}

customSort(s, d, car);

for (int i = 0; i < car; i++)
{
    time[2 * i] = s[i];
    time[2 * i + 1] = d[i];
}

printf("%d\n", car);
printf("\n");
for (int i = 0; i < 2 * car; i++)
    printf("%d ", time[i]);
printf("\n");


int drivers[10][100];
int count_0 = 0;
int count_1 = 0;
drivers[0][0] = time[0];
drivers[0][1] = time[1];
for(int i = 2; i < time_n; i += 2)
{
    if(time[i] >= drivers[0][count_0 + 1])
    {
        drivers[0][count_0 + 2] = time[i];
        drivers[0][count_0 + 3] = time[i+1];
        count_0 += 2;
    }
    else if(time[i] >= drivers[1][count_1 + 1])
    {
        drivers[1][count_1 + 2] = time[i];
        drivers[1][count_1 + 3] = time[i+1];
        count_1 += 2;
    }
}


for (int driver = 0; driver < 2; driver++)
{
    printf("Driver %d's schedule is: ", driver + 1);
    for (int i = 0; i < count_0 + count_1; i += 2) {
        if (drivers[driver][i] == 0) {
            break;
        }
        printf("%d %d ", drivers[driver][i], drivers[driver][i + 1]);
    }
    printf("\n");
}


}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void customSort(int s[], int d[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                swap(&s[i], &s[j]);
                swap(&d[i], &d[j]);
            }
        }
    }
}




