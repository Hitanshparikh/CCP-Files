#include <stdio.h>
 
int main()
{
    int arr[5]= {3,4,5,6,7};
 
    for(int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
 
    return 0;
}
