#include<iostream>
using namespace std;

int S(int n, int* hoge)
{
  if(n==1) return hoge[0]=1;
  else
  {
  return S(n-1, hoge) + n + S(n-1, hoge);
  }
}

int main()
{
  int N;
  int hoge[100]={0};
  cin>>N;
  S(N, hoge);


  cout<<S(N, hoge)<<endl;

  return 0;
}
