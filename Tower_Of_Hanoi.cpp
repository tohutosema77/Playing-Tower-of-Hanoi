#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char s,char h,char d)
{
     if (n==0) return;
     TOH(n-1,s,d,h);
     cout<<s<<" to "<<d<<endl;
     TOH(n-1,h,s,d);
     return;     
}
int main()
{
    int n;
    cout<<"Enter num: ";
    cin>>n;
   
    TOH(n,'A','B','D');
    return 0;

}