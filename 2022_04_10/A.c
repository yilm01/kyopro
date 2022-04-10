#include<stdio.h>
int main(void){
  char S[4]={0};

  scanf("%s", S);

  S[3]=S[2];
  S[2]=S[1];
  S[1]=S[0];
  S[0]='0';
  printf("%s\n", S);

  return 0;
}