#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0 ;
    printf(" Enter any Natural Number : ");
    scanf("%d",&n);
    while(n!=1)
     {
        if((n%2)==0) // checks whether the number is even/odd //
        {
            n = n/2 ;  // Even :- n/2 //
            printf("%d_",n);
            i++; ;
            if (n == 1) break;
        }
        else if((n%2)!=0)
        {
            n = (3*n) + 1 ; //Odd :- 3*n+1 //
            printf("%d_",n);
            i++ ;
            if(n==1) break;
        }
        if(n==1) break;
     }
     printf(" No.of steps to obtain 1 : %d",i);
     return 0;
}
