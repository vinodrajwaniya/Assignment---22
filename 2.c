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
    printf("\nThe Entered the %dvalue \n",size);
    for(i=0; i<size; i++)
    {
        scanf("%d",ptr+i);
    }

    for(i=0; i<size; i++)
    {
        sum=sum + *(ptr+i);
    }

    printf("The Average is %d",sum/size);
    free(ptr);

    return 0;

}