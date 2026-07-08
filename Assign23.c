#include<stdio.h>
// int main()

//Normal question of LCM

// {
//   int a,b,L;
//   printf("enter two number");
//   scanf("%d%d",&a,&b);
//   for(L=1;L<=a*b;L++)
//   if(L%a==0 && L%b==0)
//   break;
//   printf("LCM is %d",L);
//   return 0;
// }

// second method

// {
//     int a,b,L;
//     printf("enter two number");
//     scanf("%d%d",&a,&b);
//     for(L=a>b?a:b;L<=a*b;L++)    // using by conditional operator
//     if(L%a==0 && L%b==0)
//     break;
//     printf("LCM is %d",L);
//     return 0;

// }


// Assignment 23 
int lcm(int a,int b);
int main()
{
    int L;
    for(L=a>b?a:b;L<=a*b;L++)
    if(L%a==0 && L%b==0)
    return L;

}



