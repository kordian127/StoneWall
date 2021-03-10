#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main()
{
    int H[]={8,8,5,7,9,8,7,4,8};
    int n = sizeof(H)/sizeof(H[0]);
    stack<int> s;
    int result=0;

    for(int i=0;i<n;i++)
    {
        while(s.size()!=0 && s.top()>H[i])
            s.pop();

        if(s.size()!=0 && H[i]==s.top())
            continue;
        else{
            s.push(H[i]);
            result++;
        }
    }
    return result;
}


