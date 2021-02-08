#include <stdio.h>

int main()
{
    int a,b,c,x,i,l[3];
    char p[4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        x=a;
        a=b;
        b=x;
    }
    if(a>c)
    {
        x=a;
        a=c;
        c=x;
    }
    if(b>c)
    {
       x=b;
       b=c;
       c=x;
    }
    scanf("%s",p);
    for(i=0;i<3;i++)
    {
        if(p[i]=='A')
        {
            l[i]=a;
        }
        else if(p[i]=='B')
        {
            l[i]=b;
        }
        else if(p[i]=='C')
        {
            l[i]=c;
        }
    }
    printf("%d %d %d",l[0],l[1],l[2]);
    return 0;
}
