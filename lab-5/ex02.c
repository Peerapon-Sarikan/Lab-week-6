#include <stdio.h>

int main() 
{
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(original) / sizeof(original[0]);
    int temp;

  
    for (int i = 0; i < length / 2; i++) 
    {
        temp = original[i];
        original[i] = original[length - 1 - i];
        original[length - 1 - i] = temp;
    }


    printf("Reversed Array: ");
    for (int i = 0; i < length; i++) 
    {
        printf("%d ", original[i]);
    }
    printf("\n");

    return 0;
}
