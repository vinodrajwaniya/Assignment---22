#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int i=0,size=0,sum=0;

    printf("Enter the size of array: ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory Allocation is Failed !! \n");
        return 0;
    }
    printf("\nThe Entered the %d value \n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",ptr+i);
    }

    printf("The Array valus is :\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",*(ptr+i));
    }

}