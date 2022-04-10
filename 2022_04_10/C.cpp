#include<iostream>
using namespace std;

int S(int n)
{
  if(n==1)
  {
    return 1;
  }
  else
  {
    cout<<S(n-1);
    cout<<n;
    cout<<S(n-1);
    cout<<endl;
  }
  return 0;
}

int main()
{
  int N;
  cin>>N;
  S(N);
  return 0;
}
