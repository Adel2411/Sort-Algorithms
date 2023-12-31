#include <stdio.h>
#include <stdlib.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}

void merge(int* subTab1, int mid1, int* subTab2, int mid2, int* merged) {
    int left = 0;
    int right = 0;
    int i = 0;
    while (left < mid1 && right < mid2)
    {
        if (subTab1[left] < subTab2[right])
        {
            merged[i] = subTab1[left];
            left++;
            i++;
        } else
        {
            merged[i] = subTab2[right];
            right++;
            i++;
        }
    }
    while (left < mid1)
    {
        merged[i] = subTab1[left];
        left++;
        i++;
    }
    while (right < mid2)
    {
        merged[i] = subTab2[right];
        right++;
        i++;
    }
}

void mergeSort(int *tab, int N) {
    if (N <= 1)
        return;
    
    int mid = N/2;
    int* subTab1 = malloc(mid * sizeof(int));
    int* subTab2 = malloc ((N - mid) * sizeof(int));
    int i = 0;
    int j = 0;
    for (; i < N; i++)
    {
        if (i < mid)
        {
            subTab1[i] = tab[i];
        } else
        {
            subTab2[j] = tab[i];
            j++;
        }
    }
    mergeSort(subTab1, mid);
    mergeSort(subTab2, N - mid);
    merge(subTab1, mid, subTab2, N - mid, tab);
}

int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Merge sort algorithm
    mergeSort(tab, 10);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}