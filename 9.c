#include<stdio.h>

int main(){
  int N, a, i=1;
  while(1){
  printf("Enter an integer>>");
  scanf("%d", &N);
  if(N==0){
    break;
  }
  while(1){
    if(i*i*i<=N){
      a=i*i*i;
      i++;
    }
    else if(N<i*i*i){
      N-=a;
      i=1;
      if(N>0){
        printf("%d+", a);
      }
      else if(N==0){
        printf("%d\n", a);
        break;
      }
    }
  }
}
  return 0;
}
