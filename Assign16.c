#include<stdio.h>
//Q4
/*int main()
{
    int i,n,r,cube,sum=0,temp,count,x;
    printf("enter a number");
    scanf("%d",&n);
    x=n;
    
    while(n>0)
    {
        r=n%10;
        cube=r*r*r;
        sum=sum+cube;
        n=n/10;
    }
    
    if(sum==x)
    printf("armstrong number");
    else
    printf("not armstrong ");
    return 0;
}*/


//or

// int main()
// {
//   int x,c,sum=0,n;
//   printf("enter a number");
//   scanf("%d",&x);
//   int a=x;
//   for(n;x>0;n--) 
//   {
//     c=x%10;
//     sum=sum+(c*c*c);
//     //printf(" %d ",sum);
//     //x=x/10;
//     if(sum==a)3
//      printf("%d armstrong ",a);
//      break;
//     }
//     x=x/10;
//   if(sum!=a)
//   printf("%d not armstrong",a);
//   return 0;
// }

 //Q3
 int main()
 {
    int a=-1,b=1,c=0,n,x;
    printf("enter a number");
    scanf("%d",&x);
    for(n=0;c<=x;n++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==x)
        {
            printf(" %d is Fibonacci series",x);
            break;
        }
        // c=a+b;
        // a=b;
        // b=c;
    }
    if(c!=x)
    printf(" %d is not in Fibonacci series",x);
    return 0;
}
    

//Q2
// int main()
// {
//     int a,b,c,n;
//     printf("term to print");
//     scanf("%d",&n);
//     for(a=-1,b=1;n;n--)
//     {
//         c=a+b;
//         a=b;
//         b=c;
//     }
//     printf(" %d ",c);
//     return 0;
// }

//Q1
/*int main()
{
  int a=-1,b=1,c,n;
  printf("how many term of fibonacci series ");
  scanf("%d",&n);
  for(n;n>0;n--)
  {
    c=a+b;
    printf("%d ",c);
    a=b;b=c;
  }
  return 0;
}*/

//or

// {
//   int a,b,c,n;
//   printf("How many term of Fibonacci series ?");
//   scanf("%d",&n);
//   for(a=-1,b=1;n;n--)
//   {
//     c=a+b;
//     printf(" %d ",c);
//     a=b;
//     b=c;
//   }
//   return 0;
// }

// or

  // {
//   int a,i,b,c,n;
//   printf("How many term of Fibonacci series ?");
//   scanf("%d",&n);
//   a=0;
//   b=1;
//   for(i=0;i<n;i++)
//   {
//     c=a+b;
//     printf("%d",a);
//     a=b;
//     b=c;
//   }
//   return 0;
// }