#include<stdio.h>
int main()
{
    int n,m,p,i,j;
    scanf("%d %d %d",&n,&m,&p);
    if(n<=20&&m<=20&&p<=20)
    {
        int a[n][n],b[m][m],c[p][p],u[n],t[n],u1[m],t1[m],u2[p],t2[p],s=0,s1=0,d=1,e=1,f=1,k,h,g;
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
            printf("\n");
            printf("%d %d %d %d\n",u[i],t[i],s,s1);
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
        h=m-1;
        s=0;
        s1=0;
        for(i=0; i<m; i++)
        {
            u1[i]=0;
            t1[i]=0;
            for(j=0; j<m; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<m; j++)
            {
                u1[i]+=b[i][j];
                t1[i]+=b[j][i];
            }
            s+=b[i][i];
            s1+=b[i][h];
            h--;
        }
        for(i=0; i<m; i++)
        {
            printf("\n");
            printf("%d %d %d %d\n",u[i],t[i],s,s1);
            if(u1[i]==t1[i]&&u1[i]==s&&u1[i]==s1)
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
        g=p-1;
        s=0;
        s1=0;
        for(i=0; i<p; i++)
        {
            u2[i]=0;
            t2[i]=0;
            for(j=0; j<p; j++)
            {
                scanf("%d",&c[i][j]);
            }
        }
        for(i=0; i<p; i++)
        {
            for(j=0; j<p; j++)
            {
                u2[i]+=c[i][j];
                t2[i]+=c[j][i];
            }
            s+=c[i][i];
            s1+=c[i][g];
            g--;
        }
        for(i=0; i<p; i++)
        {
            printf("\n");
            printf("%d %d %d %d\n",u[i],t[i],s,s1);
            if(u2[i]==t2[i]&&u2[i]==s&&u2[i]==s1)
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
    }

    return 0;
}
