#include<stdio.h>
void main()
{
    int n,s;
    int sum(int);
    printf("enter n value");
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);

}
int sum(int n)
{
    int i,s=0;
    for(i=0;i<=n;i++)
    {
        s=s+i;
    }
    return(s);
}
