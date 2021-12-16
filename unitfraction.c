//Problem 1: There is more than one way to split 1 into four unit-fractions. [1 = 1/a + 1/b + 1/c + 1/d, for 
// positive integers a<=b, b<=c, c<=d] 
// Please write a function that enumerates all such sets (a, b, c, d) and print them. 
// For example, splitting 1 into three unit-fractions are enumerated here: 
// (2, 3, 6), (2, 4, 4), (3, 3, 3) 
// Hint: Your answer should include more than 10 4-tuples. 
// (Bonus: Do this without using floating point number types or floating-point divisions.) 
#include<stdio.h>
int gcd(int a,int b)
{
        if (a == 0)
      return b;
   return gcd(b%a, a);
}
int main()
{
   
    for(int i=1;i<=20;i++)
    {
        for(int j=1;j<=20;j++)
        {
            for(int k=1;k<=20;k++)
            {
                for(int m=1;m<=20;m++)
                {

                    
                   int a , b,c,d =1;
                   int lcm1=(i*j)/gcd(i,j);
                    
                   int lcm2=(lcm1*k)/gcd(k,lcm1);
                   int lcm3=(lcm2*m)/gcd(m,lcm2);
                   int common_denominator = lcm3;
      
                    // if(i==2 && j==3 && k==6){
                    // printf("%d  \n ",common_denominator);
                    // }
                  
                   a = common_denominator/i;
                   b= common_denominator/j;
                    c= common_denominator/k;
                    d=common_denominator/m;
                    if(a+b+c+d==common_denominator && i<=j && j<=k && k<=m){
                         printf("%d %d %d %d \n ",i,j,k,m);
                    }
                }  
                //with divison
               // float qResult= (1/i)+(1/j)+(1/k);
                // if(qResult==1)
                // {
                //   printf("%f %f %f = %f \n ",i,j,k,qResult);
                // }
            }
        }
    }
    return 0;
}