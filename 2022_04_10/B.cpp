#include<iostream>
#include<string>
using namespace std;

int main(){
  int N;
  char s[101][11]={0}, t[101][11]={0};

  cin>>N;

  for(int i=0; i<N; i++){
    cin>>s[i]>>t[i];
  }

  int flag=0;

  for(int i=0; i<N-1; i++){
    for(int j=0; j<2; j++){
      if(s[i][j]==s[i+1][j]||s[i][j]==t[i+1][j]){
        flag++;
        break;
      }else if(t[i][j]==s[i+1][j]||t[i][j]==t[i+1][j]){
        flag++;
        break;
      }
    }
  }

  cout<<flag<<endl;

  return 0;
}