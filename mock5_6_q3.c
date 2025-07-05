#include<stdio.h>
void main()
{
    int n,i,arr[100],odda[100],ocnt=0,evena[100],ecnt=0;
    printf("\n enter size= \n");
    scanf("%d",&n);

    printf("\n enter elements = \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evena[ecnt]=arr[i];
            ecnt++;
        }
        if(arr[i]%2!=0)
        {
            odda[ocnt]=arr[i];
            ocnt++;
        }
    }
    printf("\n even array = \n");
    for(i=0;i<ecnt;i++)
        printf("\t %d",evena[i]);

    printf("\n odd array = \n");
    for(i=0;i<ocnt;i++)
        printf("\t %d",odda[i]);
}