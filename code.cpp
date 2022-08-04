#include"iostream"
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int tar=0;
    cin>>tar;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]+ar[i+1]==tar)
        {
            cout<<"["<<i<<","<<(i+1)<<"]"<<endl;
        }
    }
}
