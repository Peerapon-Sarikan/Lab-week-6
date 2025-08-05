#include<stdio.h>
int main()
{
    int value[5];
    int i;
    int total = 0;
    int highest;
    for(i=0;i<5;i++)
{
    printf("Enter marks of student %d: ",i + 1);
    scanf("%d", &value[i]);
}
  highest=value[0];
  for(i=0;i<5;i++)
{
    total += value[i];
        if (value[i] > highest) {
            highest = value[i];
        }
    }
    printf("Total marks: %d\n", total);
    printf("Highest mark: %d\n",highest);

    return 0;

}