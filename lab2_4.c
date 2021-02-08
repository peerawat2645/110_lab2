#include <stdio.h>
int main()
{
    int b,y,c=92;
    char a;
    scanf("%c %d",&a,&b);
    a-=64;
    y=a-b;
    if(y%2!=0)
    {
        if(a>=1&&a<=9)
        {
            if(b%5==0)
                printf("%c(^_^)/",c);
            else
                printf("(^_^)");

        }
        else if(a>=10&&a<=18)
        {
            if(b%5==0)
                printf("%c(*o*)/",c);
            else
                printf("(*o*)");

        }
        else if(a>=19&&a<=26)
        {
            if(b%5==0)
                printf("%c(T_T)/",c);
            else
                printf("(T_T)");

        }
    }
    else
    {
        if(a>=1&&a<=9)
        {
            if(b%5==0)
                printf("%c{@_@}/",c);
            else
                printf("{@_@}");

        }
        else if(a>=10&&a<=18)
        {
            if(b%5==0)
                printf("%c{*v*}/",c);
            else
                printf("{*v*}");
        }
        else if(a>=19&&a<=26)
        {
            if(b%5==0)
                printf("%c{x_x}/",c);
            else
                printf("{x_x}");
        }
    }
    return 0;
}
