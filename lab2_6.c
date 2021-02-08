#include<stdio.h>
int main()
{
    unsigned long long int a,sum=0,b;
    scanf("%llu",&a);
    while(a>0)
    {
        b=a%10;
        sum=(sum*10)+b;
        a=a/10;
    }
    a=sum;
    while(a>0)
    {
        b=a%10;
        switch(b){
        case 1:printf("One");break;
        case 2:printf("Two");break;
        case 3:printf("Three");break;
        case 4:printf("Four");break;
        case 5:printf("Five");break;
        case 6:printf("Six");break;
        case 7:printf("Seven");break;
        case 8:printf("Eight");break;
        case 9:printf("Nine");break;
        case 0:printf("Zero");break;
        }
        a=a/10;
        if(a>1)
            printf("-");
    }
    return 0;
}


