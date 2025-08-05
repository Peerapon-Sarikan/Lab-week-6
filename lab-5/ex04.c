#include<stdio.h>
int main()
{
    int value[10];
    int i;
    int evencount=0;
    int oddcount=0;
    for(i = 0; i < 10; i++)
{
    printf("Enter value %d here: ",i + 1);
    scanf("%d", &value[i]);
}
 for(i = 0; i < 10; i++) 
 {
        if(value[i] % 2 == 0)
        evencount++;
    else 
    oddcount++;
 }
            printf("Even numbers: %d\n", evencount);
      
            printf("Odd numbers: %d\n", oddcount);
        
    return 0;
}

