#include<stdio.h>
void main()
{
    int n,factorial=1;
    scanf("%d",&n);
    if(n<0)
    {
        printf("Negative Number");
    }
        else if(n>=10)
        {
           printf("Too big a number"); 
        }
        else{ 
             int i;
            for(i=1;i<=n;i++)
            factorial=factorial*i;
            printf("%d",factorial);
        }
}
/* output;
enter a number =6
factorial =720 */
