#include <stdio.h>

int main()
{
    char p;
    float ti,total,a,b,c,d;
    scanf("%c %f",&p,&ti);
    if(p=='A')
    {
        if(ti>200)
        {
            a=(int)(ti-200);
            b=(ti-200-a)*100;
            c=b/60;
            d=(a+c)*3;
            printf("%.2f",d+199);
        }
        else
            printf("199");

    }
    else if(p=='B')
    {
        if((ti-400)>0)
        {
            a=(int)(ti-400);
            b=(ti-400-a)*100;
            c=b/60;
            d=(a+c)*2;
            printf("%.2f",d+299);
        }
        else
            printf("299");
    }
    return 0;
}
