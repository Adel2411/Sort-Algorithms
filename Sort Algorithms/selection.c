#include <stdio.h>

void printTab(int *tab, int N) {
    for (int i = 0; i < N; ++i)
        printf("%3d ", tab[i]);
    printf("\n\n");
}

void selectionSort(int *tab, int N) {
    
    // selecting minimum :
    for (int i = 0; i < N - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < N; j++)
        {
            if (tab[j] < tab[min])
            {
                min = j;
            }
        }
        int temp = tab[min];
        tab[min] = tab[i];
        tab[i] = temp;
    }

    // selecting maximum :
    // for (int i = N; i > 0; i--)
    // {
    //     int max = i;
    //     for (int j = i - 1; j >= 0; j--)
    //     {
    //         if (tab[j] > tab[max])
    //         {
    //             max = j;
    //         }
    //     }
    //     int temp = tab[max];
    //     tab[max] = tab[i];
    //     tab[i] = temp;
    // }
}

int main(int argc, char const *argv[])
{
    int tab[10] = {4, 7, 3, 9, 0, 1, 6, 5, 2, 8};
    printf("\nBefore sorting:\n");
    printTab(tab, 10);
    // Selection sort algorithm
    selectionSort(tab, 10);
    printf("After sorting:\n");
    printTab(tab, 10);
    return 0;
}
