#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void permute(string s,int n,string cur={},int i=0)
{
    if(i>=n)
        return;
    for(int j=i;j<n;j++)
    {
        cur.push_back(s[j]);
        cout<<cur<<" ";
        permute(s,n,cur,j+1);
        cur.erase(cur.size()-1);

    }
    return;

}
void find_subsets(string s,int n)
{
    sort(s.begin(),s.end());
    permute(s,n);
}
int main()
{
    string s="abc";
    int l=s.length();
    find_subsets(s,l);

    return 0;
}
