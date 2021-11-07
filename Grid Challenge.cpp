#include <iostream>
#include <algorithm>

using namespace std;

void testcase()
{
    int i,j,n;
    cin>>n;
    char str[n][n];
    for(i=0;i<n;i++)
     cin>>str[i];
    for(i=0;i<n;i++)
     sort(str[i],str[i]+n);
    for(j=0;j<n;j++)
    {
        for(i=0;i<n-1;i++)
        {
            if(str[i][j]>str[i+1][j])
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
     testcase();
    return 0;
}
