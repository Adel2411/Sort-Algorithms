#include <stdio.h>
#include <stdlib.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}

int maxTab(int *tab, int N) {
    if (N == 1) return tab[0];
    else return maxTab(tab, N-1) > tab[N-1] ? maxTab(tab, N-1) : tab[N-1];
}

void countingSort(int *tab, int N) {
    int *t = calloc(maxTab(tab, N), sizeof(int));
    int max = maxTab(tab, N);
    for (int i = 0; i < N; i++)
    {
        t[tab[i]]++;
    }
    int i = 0;
    for (int j = 0; j <= max; j++)
    {
        for (int k = 0; k < t[j]; k++)
        {
            tab[i] = j;
            i++;
        }
        
    }
}

int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Counting sort algorithm
    countingSort(tab, 10);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}