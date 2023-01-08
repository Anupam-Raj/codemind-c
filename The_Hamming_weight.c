#include<stdio.h>
#include<string.h>
int main()
{
    int i,c=0;
    char a[100];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='1')
        {
            c++;
        }
    }
    printf("%d",c);
}