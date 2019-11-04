#include<stdio.h>
int main()
{
    int i,j,a=5,b=5,c;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j==a)
            {
                c=a;
                while(c<=b)
                {
                    printf("*");
                    c=c+1;
                }
                a=a-1;
                b=b+1;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


    a=1;b=9;


    for(i=1;i<=5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j==a)
            {
                c=a;
                while(c<=b)
                {
                    printf("*");
                    c=c+1;
                }
                a=a+1;
                b=b-1;
                break;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
