#include<stdio.h>
#include<stdlib.h>
int main(){
    int n1,n2;
    //arr1
    printf("No of elemnet in arr1");
    scanf("%d",&n1);
    int  *arr1=(int *)malloc(n1*sizeof(int));
    printf("enter the elemnet in arr1");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&arr1[i]);
    }
    //arr2
        printf("No of elemnet in arr2");
    scanf("%d",&n2);
    int  *arr2=(int *)malloc(n2*sizeof(int));
    printf("enter the elemnet in arr2");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    //merge
    int *merged=(int *)malloc((n1+n2)*sizeof(int));
    for (int i = 0; i < n1; i++)
    {
        merged[i]=arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        merged[n1+i]=arr2[i];
    }
    
    printf("The merged array is::");
    for (int i = 0; i < n1+n2; i++)
    {
        printf("%d ",merged[i]);
    }
    return 0;
}