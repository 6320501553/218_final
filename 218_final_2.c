#include<stdio.h>
int main()
{
    int n,i,j,m[10000],p,l=0,s;
    scanf("%d",&n);
    int sum[n],max,min[n];
    if(n>1&&n<1001)
    {
        for(i=1; i<=10000; i++)
        {
            m[i]=0;
        }
        for(i=1; i<=n; i++)
        {
            min[i]=0;
            sum[i]=0;
            scanf("%d",&sum[i]);
        }
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(sum[i]==sum[j])
                {
                    m[sum[j]] = m[sum[j]]+1;
                    sum[j]=0;
                }
            }
        }
        max=0;
        s=0;
        for(j=1; j<=10000; j++)
        {
            if(m[j]>max)
            {
                p=0;
                max=m[j];
                m[j]=0;
                i=j;
            }
        }
        printf("%d ",i);
        for(j=1; j<=10000; j++)
        {
            if(max==m[j])
            {
                printf("%d ",j);
            }
        }

    }
    return 0;
}
