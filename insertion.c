#include <stdio.h>
int main()
{
    int i,j,n,aux,arr[100];
    
    printf("Introduceti numarul de elemente:");
    scanf("%d",&n);
    printf("Introduceti elementele:");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        aux=arr[i];j=i-1;
        while(j>=0 && arr[j]>aux)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=aux;
    }
    
    printf("Tabloul sortat:");
    for(i=0;i<n;i++)
    {
        printf("%3d",arr[i]);
    }
    
    printf("\n");
    return 0;
}