#include <bits/stdc++.h>
#include <ctype.h>
#define in cin>>
#define out cout<<
#define M 100002
#define FOR(l)   for(int k=0; k<l; k++)
#define Si set<int>
#define Mii map<int,int>
#define Mss map<string,string>
#define Vi vector<int>
#define Di deque<int>
#define max(a,b) ( (a) > (b) ? (a) : (b))
#define miN(a,b) ( (a) < (b) ? (a) : (b))

using namespace std;

int main()
{
    int n;
    in n;
    
    int count =0;
    while(n-->0)
    {
        int p,q;
        in p;
        in q;
        if(q-p>=2)
        {
            count++;
        }
    }
    
    out count;
    return 0;
}