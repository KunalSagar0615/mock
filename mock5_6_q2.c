#include<stdio.h>
void main()
{
    int n,eno=0,ono=0,r,zero=0,i;
    printf("enter no =\n");
    scanf("%d",&n);

    while(n>0)
    {        
        r=n%10;       
        
        if(r%2==0 && r!=0)
        {
            eno=eno*10+r;
         
        }
        else if(r%2!=0)
        {
            ono=ono*10+r;
        }
        else       
            zero++;
        
        n=n/10;
    }
    printf("\n even nos =");
    while(eno>0)
    {
        r=eno%10;
        printf("\t%d",r);
        eno=eno/10;
    }
    printf("\n odd nos =");
    while(ono>0)
    {
        r=ono%10;
        printf("\t%d",r);
        ono=ono/10;
    }
    printf("\n zeros =");
    for(i=1;i<=zero;i++)
    {
        printf("\t0");
    }
    
    
}