#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        if(a>=x&&a<y)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}