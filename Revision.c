#include <stdio.h>
int main()
{
  int x=0xf;
  printf("%x",x);
  return 0;
}

// {
//   int n;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(int i=2;i<n;i++)
//   {
//     if(n%i==0)
//     {
//       printf("not prime");
//     }
//     else
//     {
//       printf("prime");
//     }
//     break;
//   }
//    return 0;
//}

//int main()  //Array of pointer
 //{
  // int arr[]={1,2,3,4,5,6};
 // printf("%d\n",arr[4]);
//   printf("%d\n",*(arr+4));//using dereferencing opr
//   printf("%d\n",&arr[3]);//using referencing opr
//   printf("%d",&arr[3]-sizeof(int));
//   return 0;
// }

// {
//   int arr[]={1,2,3,4,5};
//   int*ptr=arr;
//   printf("%d",*ptr+4);
//   return 0;
// }

// int main()
// {              
//   int a=1;    //using airthmatic pointers
//   int*b;
//   b=&a;
//   int n;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(int i=1;i<n;i++)
//   printf("%d\n",*b+i);
//   // printf("%d\n",b-1);
//   // printf("%d",b+2);
//   return 0;
// }


// #include<stdio.h>
// int main()
// {
//   int x=5;
//   int *j;
//   j=&x;
//   printf("%d",*j);
//   return 0;
// }

// {
//   int f,i,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(i=1,f=1;i<=n;i++)
//   {
//     f=f*i;
//    // printf("%d",f);
//   }
//   printf("%d",f);
//   return 0;
// }


// {
//   int n,i;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(i=2;i<=n;i++)
//   {
//    n%i==0;
//    break;
//   }
//   if(i==n)
//     printf("prime number");
//     else
//     printf("not prime");
//   return 0;

// {
//   int x;
//   printf("enter a number");
//   scanf("%d",&x);
//   switch(x)
//   {
//     case 1:
//     printf("sunday");
//     break;
//     case 2:
//     printf("monday");
//     break;
//     case 3:
//     printf("tuesday");
//     break;
//     case 4:
//     printf("wednesday");
//     break;
//     case 5:
//     printf("thursday");
//     break;
//     case 6:
//     printf("friday");
//     break;
//     case 7:
//     printf("saturday");
//     default:
//     printf("sunday");
//   }
//   return 0;

  
// }
// {
//   int n,a,b,c,d,y,x;
//   printf("enter a number");
//   scanf("%d",&n);
//   x=n;
//   while(n>0)
//   {
//     a=n%10;
//     y=n/10;
//     b=y%10;
//     c=y/10;
//     d=(a*a*a)+(b*b*b)+(c*c*c);
//    // printf("%d",d);
//  }
//  if(d==n)
//  printf("Armstrong number");
//  else
//  printf("it is not Armstrong");
//  return 0;
// }

/*{
  int n,i;
  printf("enter a number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    printf("%d",i);
  }
  printf("\n");
  printf("%d",i);
}*/

/*#include<stdlib.h>
#include<math.h>
void main()
{
  float a=-5.6;
  float b=fabs(a);
  printf("%f",b);
}*/

/*void main()
{
  int a=-5;
  int b=abs(a);
  printf("%d",b);
}*/

/*int main()
{
  int i,j,n,x;
  printf("enter a number");
  scanf("%d",&n);
  x=n;
  for(i=1;i<n;i++)
  {
    for(j=1;j<x;j++)
    {
    printf(" *");
    }
    printf("\n");
  }*/
  


/*{
  int i,j,n;
  printf("enter a number");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}*/

/*{
  int n,r=0;
  printf("enter a number");
  scanf("%d",&n);
  while(n>1)
  {
    r=r*10+n%10;
    //printf("%d",r);
    n=n/10;
    
  }
  printf("%d",r);
  return 0;
}*/

/*{
  int i,n,j;
  printf("enter a number");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    for(j=2;j<i;j++)
    //printf("%d",i);
    if(i%j==0)
    {
      break;
    }
    if(j==i)
    printf(" %d ",j);
    
  }
  // if(i==j)
  // printf("%d",j);

  //printf("prime");
  //else
  //printf("not prime");
  return 0;
}*/


/*{
  int i,n,H,a,b;
  printf("enter a number");
  scanf("%d%d",&a,&b);
  for(H=a<b?a:b;H>=1;H--)
  {
    if(a%H==0  && b%H==0)
    //printf("LCM is %d",L);
    break;
  }
  printf("HCF* is %d",H);
  return 0;
}*/

/*{
  int i,n;
  printf("enter a number"); 
  scanf("%d",&n);
  for(i=1;i<n;i++)
  {
  //printf("%d ",i*i);
  }
  printf("%d",i);
  return 0;
}*/

/*{
  int i,j,n;
  printf("enter a number");
  scanf("%d",&n);
  int x=n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}*/

/*{
  int a=-1,b=1,c=0,n,x;
  printf("enter a number");
  scanf("%d",&x);
  for(n=0;c<=x;n++)
  {
    c=a+b;
    //printf("%d ",c);
    a=b;
    b=c;
    if(c==x)
    {
      printf("this is fibonacci series");
      break;
    }
  } 
  
  if(c!=x)
   printf("this is not fibonacci series");
  
  return 0;
}*/

 /*{
  char m='A';
  m++;
   printf("size of is %c",m);
   return 0;
 }*/

 /*{
  int n,a;
  printf("enter a number");
  scanf("%d",&n);
  a=n/10;
  printf("without last digit number %d",a);
  return 0;
 }*/

 /*{
   int n,r;
   printf("enter a number");
   scanf("%d",&n);
   r=n%10;
   printf("last digit is %d",r);
   return 0;
 }*/

 /*{
   char a,b,c;
   printf("enter three character");
   scanf("%c%c%c",&a,&b,&c);
   printf("%d %d %d",a,b,c);
   return 0;
 }*/

 /*{
  char c;
  printf("enter a character");
  scanf("%c",&c);
  //int a=c;
  printf("%d",c);
  return 0;
 }*/

 /*{
  int a;
  printf("enter a number");
  scanf("%d",&a);
  printf("%c",a);
  return 0;
 }*/


 /*{
  int x,y,z;
  float si=1;
  printf("enter a number");
  scanf("%d%d%d",&x,&y,&z);
  si=(x*y*z)/100.0;
  printf("si is %f",si);
  return 0;
}*/

// {
//   int a=-1,b=1,c,n,x;
//   printf("how many term of fibonacci series ");
//   scanf("%d",&n);
//   for(;x=n+2;x--)
//   {
//     c=a+b;
//     a=b;
//     b=c;
//     //printf("%d ",c);
//     if(c==n)
//     {
//       printf("fibonacci");
//     }
//     break;
// }
// if(c!=n)
// printf("not fibonacci");
//  return 0;
// }

// {
//   int i=0,n,count;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(i=0;n>0;i++)
//   {
//     n=n/10;
//    count++;
//   }


//   printf("%d",i);
//   return 0;
// }



//   }
//   printf("%d",count);
//   return 0;
// }

// {
//   int x,j,c;x
//   printf("enter a number");
//   scanf("%d",&x);
//   for(;x>0;j++)
//   {
//     c=x%10;
//     printf("%d",c);
//     x=x/10;
//   }
//   return 0;
// }

// {
//   int a,b,c,x,n,s;
//   printf("enter a number");
//   scanf("%d",&n);
//   for(a=-1,b=1;s=n+2;s--)
//   {
  
//     c=a+b;
//     a=b;
//     b=c;
//     if(c==n)
//     {
//     printf("Fibonacci");
//     break;
//     }
//     if(c>n)
//     {
//       printf("Not Fibonacci");
//     break;
//     }
//   }
//     return 0;
//   }


// int main()
// {
//   int a,b;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//   a>b?printf("A is greater then B"):printf("A is less then B");
//   return 0;
// }

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

// int main() 
// {
//   int x,i;
//   printf("etner a number");
//   scanf("%d",&x);
//   for(i=2;i<x;i++)
//   {
//     if(x%i==0)
//     // printf("not prime");
//     break;
//   }
//   if(x==i)
//   printf("prime");
//   else
//   printf("not prime");
//   return 0;
// }   


 //switch() case problem
// {
//   int x,a,b,c;
//   printf("enter a number");
//   scanf("%d",&x);
//   switch(x)
//   {
//     case 1:
//     printf("enter a number");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("sum is %d",c);
//     break;
    
//     case 2:
//     printf("enter a number");
//     scanf("%d%d",&a,&b);
//     c=a-b;
//     printf("subtract is %d",c);
//     break;

//     case 3:
//     printf("enter a number");
//     scanf("%d%d",&a,&b);
//     c=a*b;
//     printf("multiple is %d",c);
//     break;

//     case 4:
//     printf("enter a number");
//     scanf("%d%d",&a,&b);
//     c=a/b;
//     printf("divide is %d",c);
//     break;
//   }
//   return 0;
// }
                                    

/*int main()
{
  int x,i;
  printf("enter a number");
  scanf("%d",&x);
  for(i=2;i<x;i++)
  {
    if(x%i==0)
    break;
  }
    if(x==i)
    {
     printf("Prime");
    }
     else
     printf("Not Prime");
     return 0;
  }*/


// int main()
// {
//   int L,a,b;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//   for(L=a>b?a:b;L<=a*b;L++)
//   {
//     if(L%a==0 && L%b==0);
//     break;
//   }
//   printf("%d",L);
//   return 0;
// }

// int main()
// {
//   int x,i=2;
//   printf("enter a number");
//   scanf("%d",&x);
//   for(i;i<x;i++)
//   {
//     if(x%i==0)
//     break;
//   }
//   if(i==x)
//    printf("prime");
//   else
//    printf("not prime");
//   return 0;
// }
// int main()
// {
//   int a,b;
//   printf("enter a two number\n");
//   scanf("%d%d",&a,&b);
//   a=a^b;
//   b=a^b;
//   a=a^b;
//   printf("%d%d",a,b);
//   return 0;
// }
// int main()
// {
//   int x=5,y;
//   x=x+=2;
//   printf("%d%d",x,y);
//   return 0;
// }
// int main()
// {
//   int i=1,n;;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=10)
//   {
//     printf("%d*%d=%d\n",n,i,i*n);
//     i++;
//   }
//   return 0;
// }
// 
// int main()
// {
//   int i=0,j,k;
//   for(i=0;i<4;i++)
//   {
//     j=i*5+1;
//     k=j*2-2;
//   }
//   printf("%d%d%d",i,j,k);
//   return 0;
//   }
// int main()
// {
//   int n;
//   printf("enter a number");
//   scanf("%d",&n);
//   if(n%2==0)
//   printf("win");
//   else
//   printf("game is over");
//   return 0;
// }

//Q1
// int main()
// {
//   int i=1,s=0,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//      s=s+i;
//      i++;
//   }
//   printf("%d",s);
//   return 0;
//}

//Q2
// int main()              // caculate the even number
// {
//   int s=0,i=1,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     s=s+2*i;
//     i++;
//   }
//   printf("%d",s);
//   return 0;
// }

//Q3
// int main()
// {
//   int i=1,s=0,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     s=s+2*i-1;
//     i++;
//   }
//   printf("%d",s);
//   return 0;
// }

//Q4
// int main()
// {
//   int s=0,n,i=1;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     s=s+i*i;
//     i++;
//   }
//   printf("%d",s);
//   return 0;
// }

//Q5
// int main()
// {
//   int s=0,i=1,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     s=s+i*i*i;
//     i++;
//   }
//   printf("%d",s);
//   return 0;
// }

// int main()
// {
//     int a,b;
//     printf("enter two numbers");
//     scanf("%d%d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("a=""%d"" b=""%d",a,b);
//     return 0;
// }

// int main()
// {
//    int a,x;
// //   printf("enter a number");
// //   scanf("%d",&a);
//   x=sizeof(long int);
//   printf("%d",x);
//   return 0;
// }
// int a,b,c;
// int main()
// {
//   printf("enter two number");
//   scanf("%d%d",&a,&b);
//   c=a+b;
//   printf("%d",c);
//   return 0;
// }


// int main()
// {
//   int n;
//   printf("enter a nunber");
//   scanf("%d",&n);
//   if(n%5==0)
//   printf("divisble by 5 ");
//   else
//   printf("not divisble by 5");
//   return 0;
  
//   }

// int main()
// {
//   int a,b,c;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//   c=a;
//   a=b;
//   b=c;
//   printf("a=%d\nb=%d",a,b);
//   return 0;
// }/

// int main()
// {
//   int a,b;
//   printf("enter a number");
//   scanf("%d%d",&a,&b);
//   a=a*b;
//   b=a/b;
//   a=a/b;
// printf("a=%d\nb=%d",a,b);
// return 0;
  
// }
// int a,b,c;
// int main()
// {
//    printf("enter a number");
//   scanf("%d%d",&a,&b);
//   c=a+b;
//   printf("sum is %d",c);
//   return 0;
// }

// {
//   int i=1,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     printf("%d\n",i);
//     i++;

//   }
//   return 0;
// }

/*{
  int i,n;
  printf("enter a number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    n%i==0;
    break;

  } 
  if(n==i)
  {
    printf("even number");
  }
 else
    {
      printf("not even number");
    }
    return 0;
  }*/
 
 /*{
  int n,i;
  printf("enter a number");
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
    if(n%i==0)
    break;
  }
  if(i==n)
  {
    printf("even number");
  }
  else
  {
    printf("not prime number");
  }
  return 0;

  
 }*/

// {
//   int a=-1,b=1,c,n;
//   printf("enter a number");
//   scanf("%d",&n);
//   while(n)
// {
//   c=a+b;
//   printf("%d",c);
//   a=b;
//   b=c;
//   n--;
// }
// return 0;
// }

