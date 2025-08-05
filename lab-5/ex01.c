#include<stdio.h>
int main()
{
    int value[10];
    int i;
    for(i=0;i<10;i++)
{
    printf("Enter value %d here: ",i + 1);
    scanf("%d", &value[i]);
}
  printf("Values in Array are: ");
    for(i = 0; i < 10; i++) 
{
    printf("%d", value[i]);
    if (i < 9) {
    printf(", ");
        }
}
    return 0;

}
