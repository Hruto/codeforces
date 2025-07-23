#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
        int n,x,sum=0,l=-1,r;
        cin>>n>>x;
        for (int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if (a%x)
            {
                if (l==-1)
                l=i;
                r=i;
            }
            sum+=a;
        }
        if (sum%x)
        printf("%d\n",n);
        else if (l==-1)
        printf("-1\n");
        else
        printf("%d\n",n-min(l+1,n-r));
    }
}
