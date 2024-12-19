#include <stdio.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}

void bubbleSort(int *tab, int N) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }  
    }
    
}

int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Bubble sort algorithm
    bubbleSort(tab, 10);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}
