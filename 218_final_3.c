#include<stdio.h>
int main()
{
    int n,m,p,i,j;
    scanf("%d %d %d",&n,&m,&p);
    if(n<=20&&m<=20&&p<=20)
    {
        int a[n][n],b[m][m],c[p][p],u[n],t[n],s=0,s1=0,d=1,e=1,f=1,k;
        printf("\n\n");
        k=n-1;
        for(i=0; i<n; i++)
        {
            u[i]=0;
            t[i]=0;
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                u[i]+=a[i][j];
                t[i]+=a[j][i];
            }
            s+=a[i][i];
            s1+=a[i][k];
            k--;
        }
        for(i=0; i<n; i++)
        {
            if(u[i]==t[i]&&u[i]==s&&u[i]==s1)
            {
                d=1;
            }
            else
            {
                d=0;
                break;
            }
        }
        printf("\n");
        k=m-1;
        for(i=0; i<m; i++)
        {
            u[i]=0;
            t[i]=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                u[i]+=b[i][j];
                t[i]+=b[j][i];
            }
            s+=b[i][i];
            s1+=b[i][k];
            k--;
        }
        for(i=0; i<m; i++)
        {
            if(u[i]==t[i]&&u[i]==s&&u[i]==s1)
            {
                e=1;
            }
            else
            {
                e=0;
                break;
            }
        }
        printf("\n");
        k=p-1;
        for(i=0; i<p; i++)
        {
            u[i]=0;
            t[i]=0;
            for(j=0; j<p; j++)
            {
                scanf("%d",&c[i][j]);
            }
        }
        for(i=0; i<p; i++)
        {
            for(j=0; j<m; j++)
            {
                u[i]+=c[i][j];
                t[i]+=c[j][i];
            }
            s+=c[i][i];
            s1+=c[i][k];
            k--;
        }
        for(i=0; i<p; i++)
        {
            if(u[i]==t[i]&&u[i]==s&&u[i]==s1)
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(d==1)
        {
            printf("no ");
        }
        else
            printf("yes ");
        if(e==1)
        {
            printf("no ");
        }
        else
            printf("yes ");
        if(f==1)
        {
            printf("no ");
        }
        else
            printf("yes ");
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
