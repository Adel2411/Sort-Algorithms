#include <stdio.h>
#include <stdlib.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}

void insertionSort(int *tab, int N) {
    for (int i = 1; i < N; i++)
    {
        int temp = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > temp)
        {
            tab[j+1] = tab[j];
            j--;
        }
        tab[j + 1] = temp;
    }
    
}

int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Insetion sort algorithm
    insertionSort(tab, 10);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}