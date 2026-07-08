#include <stdio.h>
//Q1
// int main()
// {
//     float cp,sp,per;
//     printf("enter cp and sp\n");
//     scanf("%f%f",&cp,&sp);
//     if(sp>=cp)
//     {
//      per=(sp-cp)/cp*100;
//      printf("Profit percentage = %.2f%%",per);
//     }
//      else
//      {
//      per=(cp-sp)/cp*100;
//      printf("loss percentage = %.2f%%",per);
//      }
//      return 0;
// }

//Q2
// int main()
// {
//   int m1,m2,m3,m4,m5;
//   printf("Enter marks of five subjects\n");
//   scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
//   if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>=33)
//      printf("Result is pass");
//    else
//      printf("Result is Fail");
//    return 0;
// }

// Q3
// int main()
// {
//   char ch;
//   printf("enter a charecter");
//   scanf("%c",&ch);
//   if(ch>=65 && ch<=90)
//   {
//     printf("Uppercase");
//   }
//   if(ch>=96 && ch<=121)
//   {
//     printf("Lowercase");
//   }
//   return 0;
//   }

// Q4
// int main()
// {
//   int a;
//   printf("enter a number");
//   scanf("%d",&a);
//   if(a%2==0 && a%3==0)
//   printf("Yes: divisble by 2 & 3");
//   else
//   printf("NO:divisble by 2 & 3");
//   return 0;
// }

// Q5
// int main()
// {
//   int x;
//   printf("enter a number");
//   scanf("%d",&x);
//   if(x%3==0 || x%7==0)
//    printf("Yes:divisible by 3 || 7");
//   else
//    printf("NO:divisible by 3 || 7");
//   return 0;
// }



int greatest(int arr[],int size)
{
    int max,i;
    for(i=0;i<=size;i++)
max=a[0];
if(max>a[i+1])
max=a[i];
return max;
    
}

int greatest(int arr[],int size)
