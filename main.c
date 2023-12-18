#include <stdio.h>
#include <stdlib.h>
void Sort(int *a, int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (*(a + j) < *(a + j + 1))
            {
                temp = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int *a;
    int n,i;
    printf("enter size of the array");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0; i<n; i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",(a+i));
    }
    Sort(a,n);

}
