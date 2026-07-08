#include<stdio.h>
void q3()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
}
int main()
{
   q3();
   printf("\n");
   return 0;
}

//Q2
/*void q2()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j>=6-i)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
}
int main()
{
   q2();
   printf("\n");
   return 0;
}*/


//Q1
/*void q1()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
int main()
{
   q1();
   return 0;
}*/