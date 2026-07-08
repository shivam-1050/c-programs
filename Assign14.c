#include<stdio.h>
int main()
//Q1
// {
//     int i,n,s=1;
//     printf("enter a number");
//     scanf("%d",&n);
//     for(i=n;i>=1;i--)
//     {
//        s=s*i;
//     }
//        printf("%d",s); 
//     return 0;
// }

//or

// {
//     int i,n,s=1;
//     printf("enter a numbetr");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         s=s*i;
//     }
//     printf("%d",s);
//     return 0;
// }

//Q2
// int main()
// {
//     int x,count=0;
//     printf("enter a number");
//     scanf("%d",&x);
//     while(x>0)
//     {
//     x=x/10;
//     count++; 
//     }
//     printf("%d",count);
//     return 0;
// }

//Q3 
// int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
    //printf("not prime")
        break;
    }
    if(i==n)
     printf("prime number");
    else
     printf("not prime");
  return 0;
}

//Q4
// int main()
// {
//     int a,b,L;
//     printf("enter two number\n");
//     scanf("%d%d",&a,&b);
//     for(L=a>b?a:b;L<=a*b;L++)
//     {
//         if(L%a==0 && L%b==0)
//         break;
//     }
//     printf("LCM is %d",L);
//     return 0;
// }

//Q5
// int main()
// {
//     int x,y=0;
//     printf("enter a number");
//     scanf("%d",&x);
//     while(x)
//     {
//         y=y*10+x%10;
//         x/=10;
//     }
//     printf("Reverse is %d",y);
//     return 0;
// }