# include<stdio.h>
int main()
{
    int n,r,s=0;
    scanf("%d",&n);
    int squ=n*n;
    while(squ!=0)
    {
        r=squ%10;
        s=s+r;
        squ=squ/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
}