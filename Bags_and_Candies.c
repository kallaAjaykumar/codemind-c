#include<stdio.h>
int main()
{
    int n,k,m,a,c;
    scanf("%d%d%d",&n,&k,&m);
    a=k*m;
    c=n/a;
    if(n%a!=0)
    {
        c=c+1;
    }
    printf("%d",c);
}