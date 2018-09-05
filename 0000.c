#include<stdio.h>
#include<math.h>
int main()
{
    int m,t,b;
    scanf("%d",&m);
    for(int i=0;i<m/2;i++)
    {
        int a=i;
        int delta=(2*a-1)*(2*a-1)+8*m;
        int k=(int) sqrt(delta);
        int n=k-2*a+1;
        if(k*k!=delta)
            continue;
        else
            if(n%2)
            continue;
            else
                {
                    printf("%d ",i);
                    b=i;
                    break;
                }

    }
    t=b;
    while(1)
    {
        b++;
        t+=b;
        if(t==m)
        {
            printf("%d",b);
            break;
        }
    }
}
