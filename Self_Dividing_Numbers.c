# include<stdio.h>
int self(int );
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    for(int i=m; i<=n; i++)
    {
    if(self(i))
    {
        printf("%d ",i);
    }
    }
}
int self(int n)
{
    int r;
    int t=n;
    while(n!=0)
    {
        r=n%10;
        if(r!=0)
        {
        if(t%r!=0)
        {
            return 0;
        }
        }
        else 
        {
            return 0;
        }
        n=n/10;
    }
    return 1;
}