#include <stdio.h>

void main()
{
    system("cls");
    char string[100];
    printf("enter a string for reversal:\n");
    scanf("%s", &string);
    int length = strlen(string);

    for (int i = 0; i < length / 2; i++)
    {
        char temp;
        temp = string[i];
        string[i] = string[length - i-1];
        string[length - i-1] = temp;
    }
    printf("reversed string is: %s", string);
    
}