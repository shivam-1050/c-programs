#include<stdio.h>
//Q5
int main()
{
  int a,b,H;
  printf("enter two number");
  scanf("%d%d",&a,&b);
  for(H=a<b?a:b;H>=1;H--)
  {
    if(a%H==0 && b%H==0)
    break;
  }
  if(H==1)
  printf("co prime");
  else
  printf("not co prime");
  return 0;
}

//Q4
// int main()
// {
//   int a,b,H;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//  for(H=a<b?a:b;H>=1;H--)
//  {
//   if(a%H==0 && b%H==0)
//    break;
//  }
//  printf("HCF is %d",H);
//  return 0;
// }


//Q3
// int main()
// {
//   int x,i;
//   printf("enter a number");
//   scanf("%d",&x);
//   for(x; ;x++)
//   {
//     for(i=2;i<=x;i++)
//       if(x%i==0)
//       break;

//     if(i==x)
//     {
//     printf("%d",x);
//     break;
//     }
//   }
//   return 0;
// } 

//Q2
// int main()
// {
//   int x,i,a,b;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//   for(x=a;x<b ;x++)
//   {
//     for(i=2;i<x;i++)
//     {
//       if(x%i==0)
//       break;
//     }
//     if(x==i)
//     printf("%d\n",x);
    
//   }
//   return 0;
// }

//Q1
// int main()
// {
//   int x,i;
//   for(x=2;x<100;x++)
//   {
//     for(i=2;i<x;i++)
//     {
//       if(x%i==0)
//       break;
//     }
//     if(i==x)
//     printf("%d\n",x);
//   }
//   return 0;
// }