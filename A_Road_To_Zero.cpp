#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x, y, a, b;
        cin>>x>>y>>a>>b;
        long long int w1 = min(x,y)*b+(max(x,y)-min(x,y))*a;
        long long int w2 = (x+y)*a; 
        cout<<min(w1,w2)<<endl;
    }
    return 0;
}