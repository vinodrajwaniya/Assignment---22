#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i=0, sum=0, size=0;
    printf("Entered the array size: ");
    scanf("%d",&size);

    ptr = (int*)malloc(sizeof(int));


    if(ptr == NULL)
    {
        printf("Memory Allocation is Failed !! \n");
        return 0;
    }
    printf("Enter the %d value\n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d", ptr+i);
    }

    for(i=0; i<size; i++)
    sum=sum + *(ptr+i);

    printf("The sum is %d ",sum);
    free(ptr);
    return 0;
}