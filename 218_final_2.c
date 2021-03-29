#include<stdio.h>
int main()
{
    int n,i,j,k[10000],m[10000];
    scanf("%d",&n);
    int sum[n],max;
    if(n>1&&n<1001)
    {
        for(i=1;i<=10000;i++)
        {
            m[i]=i;
            k[i]=0;
        }
        for(i=1;i<=n;i++)
        {
            sum[i]=0;
            scanf("%d",&sum[i]);
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=10000;j++)
            {
                if(sum[i]==m[j])
                {
                    k[j]=k[j]+1;
                }
            }
        }
        max=k[1];
        j=1;
        for(i=2;i<=10000;i++)
        {
            if(k[i]>max)
            {
                max=k[i];
                j=i;
            }
        }
        printf("%d ",j);
    }
    return 0;
}
