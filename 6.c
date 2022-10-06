#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,t=0;
    int i=0, sum=0, size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("\nEnter the %d value\n",size);
    for(i=0; i<size; i++)
    scanf("%d",ptr+i);

    for(i=0; i<size; i++)
    {
        if(*(ptr+i) > t)
            t=*(ptr+i);
    }

    printf("The largest element is %d",t);
    free(ptr);

    return 0;
}