#include <bits/stdc++.h>
using namespace std;
void Merge(vector<int> &a , int m ,  vector<int> &b , int n)
{
 int i = m-1;
 int j = n-1;
 int k = m+n-1;
 while(i>=0 && j>=0)
 {
    if(a[i] > b[j])
    {
        a[k] = a[i];
        i--;
    }
    else{
        a[k] = b[j];
        j--;
    }
    k--;
 }
 while(j >= 0)
 {
    a[k] = b[j];
    j--;
    k--;
 }

}
int main()
{
    vector<int> a = {1,3,5,6};
    int m = 8;
    vector<int> b = {2,6,3,5};
    int n = 4;
    Merge(a,m,b,n); 
    for(int i = 0; i<m;i++)
    {
        cout<<a[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}

