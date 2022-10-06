#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;

    ptr = (int*)malloc(sizeof(int));

    *ptr=10;

    printf("\nBefore Free %d",*ptr);

    free(ptr);

    printf("\n\nAfter Free %d\n",*ptr);

    return 0;
}