#include<stdio.h>
int main()
{
    int n,m,p,i,j;
    scanf("%d %d %d",&n,&m,&p);
    if(n<=20&&m<=20&&p<=20)
    {
        int a[n][n],b[m][m],c[p][p],u[n],t[m],s[p],d=0,e=0,f=0;
        printf("\n\n");
        for(i=0; i<n; i++)
        {
            u[i]=0;
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
                u[i]+=a[i][j];
            }
        }
        for(i=1; i<n; i++)
        {
            if(u[0]==u[i])
            {
                d=1;
            }
        }
        if(d==1)
        {
            for(j=0; j<n; j++)
            {
                u[j]=0;
                for(i=0; i<n; i++)
                {
                    u[j]+=a[i][j];
                }
                printf("%d ",u[j]);
            }
        }
        /*for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<p;j++)
            {
                scanf("%d",&c[i][j]);
            }
        }*/
    }

    return 0;
}
