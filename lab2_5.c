#include <stdio.h>
int main()
{
    int d,m,sum,c;
    scanf("%d %d",&d,&m);
    if(m==2)
    {
        c=28;
    }
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
    {
        c=31;
    }
    if(m==4||m==6||m==9||m==11)
    {
        c=30;
    }
    sum=(c+d)%7;
    if(sum==0)
        printf("7");
    else
        printf("%d",sum);
    return 0;
}
