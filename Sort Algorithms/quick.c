#include <stdio.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}


void quickSort(int *tab, int start, int end) {
    if (start >= end)
        return;
    
    int pivot = tab[end];
    int i = start - 1;
    int temp;
    for (int j = start; j < end; j++)
    {
        if (tab[j] < pivot)
        {
            i++;
            temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
    }
    i++;
    temp = tab[i];
    tab[i] = tab[end];
    tab[end] = temp;
    quickSort(tab, start, i - 1);
    quickSort(tab, i + 1, end);
}


int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Quick sort algorithm
    quickSort(tab, 0, 9);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}
