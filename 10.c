#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr,l=0,s=10000;
    int i=0, sum=0, size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    ptr = (int*)calloc(size,sizeof(int));

    printf("\nEnter the %d value\n",size);
    for(i=0; i<size; i++)
    scanf("%d",ptr+i);

    for(i=0; i<size; i++)
    {
        if(*(ptr+i) > l)
            l = *(ptr+i);

        if(*(ptr+i) < s)
            s = *(ptr+i);
    }

    printf("The maximum value is %d\n\n",l);
    printf("The minimum value is %d\n",s);

    free(ptr);

    return 0;
}