#include<stdio.h>
#include<stdlib.h>

void* create(int n)
{
    int *a;
    a=(int*)malloc(sizeof(int)*n);
    return a;
}

void accept(int *a, int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}

void arrange(int *a, int n)
{
    int pbit, j;
    printf("Enter the position : ");
    scanf("%d", &pbit);
    for(int i=pbit, j=1; j<=n; i=(i+1)%n, j++)
        printf("%d ", a[i]);
}

int main()
{
    int *a, n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    a=create(n);
    accept(a, n);
    arrange(a, n);
}