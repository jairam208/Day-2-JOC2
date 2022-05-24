#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[50], n, i, l1, l2;
    printf("Enter the number of balloons : ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    l1=l2=a[0];
    for(i=1; i<n; i++)
        if(a[i]>l1)
            l1=a[i];
    for(i=1; i<n; i++)
        if(a[i]<l1 && a[i]>=l2)
            l2=a[i];
    printf("The ttwo balloons are : %d and %d\n", l1, l2);
}