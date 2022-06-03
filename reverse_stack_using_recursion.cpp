#include <bits/stdc++.h>
using namespace std;

stack<int>s1,s2;

void insert_at_bottom(int x)
{
  if(s1.size()==0)
  {
    s1.push(x);
    return;
  }

  int l;
  l=s1.top();
  s1.pop();
  insert_at_bottom(x);
  s1.push(l);
}


void revers()
{
  if(s1.size()==0)
  {
    return;
  }

  int p=s1.top();
  s1.pop();
  revers();
  insert_at_bottom(p);
}

int main()
{
  #ifndef ONLINE_JUDGE
  freopen("INPUT.txt","r",stdin);
  freopen("OUTPUT.txt","w",stdout);
  #endif

  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    int c;
    cin>>c;

    s1.push(c);
  }
  
  s2=s1;

  while(s2.empty()==false)
  {
    cout<<s2.top()<<" ";
    s2.pop();
  }
  
  revers();
  cout<<endl;
  
  while(s1.empty()==false)
  {
    cout<<s1.top()<<" ";
    s1.pop();
  }



}
