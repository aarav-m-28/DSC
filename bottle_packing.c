#include <stdio.h>

void main()
{
    system("cls");
    int bottles;
    printf("Enter the total number of bottles:");
    scanf("%d", &bottles);

    int size[4] = {48,24,12,6};
    int count[4];

    for (int i = 0; i < 4; i++)
    {
        count[i] = bottles / size[i];
        bottles %= size[i];
    }
    if (bottles > 0)
    {
        count[3]++;
    }
    printf("Cartons required:\n");
    printf("XL (48 bottles): %d\n", count[0]);
    printf("L  (24 bottles): %d\n", count[1]);
    printf("M  (12 bottles): %d\n", count[2]);
    printf("S  (6 bottles): %d\n", count[3]);
}
