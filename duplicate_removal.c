#include <stdio.h>
void main()
{
    system("cls");
    int array[] = {2, 2, 2, 2, 3, 4, 4, 4, 5, 5, 6, 7, 7};
    int size = sizeof(array) / sizeof(array[0]);

    printf("orignal array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == array[j])
            {

                for (int k = j; k < size - 1; k++)
                {
                    array[k] = array[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\n");
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}