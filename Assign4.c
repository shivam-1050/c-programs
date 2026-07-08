#include<stdio.h>
//Q1
// int main()
// {
//   printf("size is %d",sizeof('A'));
//   return 0;
// }

//Q2
// int main()
// {
//     printf("size is %d",sizeof(87));
//     return 0;
// }

//Q3
int main()
{
  char m='A';
  m++; //m=m+1;
  printf("%c",m);
  return 0;
}

//Q4
// int main()
// {
//     int a=4,b=3,c;
//     c=a;
//     a=b;
//     b=c;
//     printf(" a=%d\n b=%d",a,b);
//     return 0;
      //Or
//   int a,b,c;
//   printf("enter two number\n");
//   scanf("%d%d",&a,&b);
//   c=a;
//   a=b;
//   b=c;
//   printf("a=%d\nb=%d",a,b);
//   return 0;    
 //}

 //Q5
//  int main()
//  {
//     int a,b;
//     printf("enter two number\n");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=%d\nb=%d",a,b);
//     return 0;
//  }

//Q6
// int main()
// {
//       int a,b;
//       printf("Enter two numbers\n");
//       scanf("%d%d",&a,&b);
//       a=a*b;
//       b=a/b;
//       a=a/b;
//       printf("a=%d\nb=%d",a,b);
//       return 0;

// }

//Q7
/*int main()
{
      int a,b;
      printf("Enter two number\n");
      scanf("%d%d",&a,&b);
      a=a^b;
      b=a^b;
      a=a^b;
      printf("a=%d b=%d",a,b);
      return 0;

}
*/

// int main()
// {
//       int n;
//       printf("enter a number\n");
//       scanf("%d",&n);
//       if(n>0)
//       printf("positive");
//       else
//       printf("non positive");
//       return 0;
// }

// int main()
// {
//       int x;
//       printf("enter a number\n");
//       scanf("%d",&x);
//       x>0?printf("positvie "):printf("non positive");
//       return 0;
// }

// int main()
// {
//       int x=5;
//       if(x>0)
//       {
//       printf("hello\n");
//       }
//       printf("%d",x);
//       return 0 ;

// }

// int main()
// {
//       int x=5;
//       if(x==4)
//       {
//          printf("hello");  
//          printf("bye"); 
//       }
//       else
//       printf("bye");
//       printf("%d",x);
//       return 0;
// }