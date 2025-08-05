#include<stdio.h>
int main()
{
    int value[8];
    int i;
    int smallest;
    int largest;
    for(i = 0; i < 8; i++)
{
    printf("Enter value %d here: ",i + 1);
    scanf("%d", &value[i]);
}
smallest = largest = value[0];
 for(i = 0; i < 8; i++) 
 {
        if (value[i] < smallest) {
            smallest = value[i];
        }
        if (value[i] > largest) {
            largest = value[i];
        }
    }
 
            printf("Smallest number: %d\n", smallest);
            printf("Largest number: %d\n", largest);
        
    return 0;
}
