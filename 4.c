#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;
    int i=0, size=0;
    printf("Enter the array size: ");
    scanf("%d",&size);

    str = (char*)malloc(sizeof(char*));

    if(str == NULL)
    {
        printf("Memory Allocatin Failed !! \n");
        return 0;
    }
    printf("\nEnter the %d value\n",size);
    for(i=0; i<size; i++)
    {
    scanf("%s",str+i);
    }

    printf("The print valus is \n");
    //for(i=0; i<size; i++)

    printf("%s ",str);
    free(str);
    return 0;

}