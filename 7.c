#include<stdio.h>

int main(){
  int n1, n2, sum=0, i=0;
  while(1){
    scanf("%d %d", &n1, &n2);
    if(n1==0 && n2==0) break;
    while(1){
      i++;
      if(n2*i<=n1){
        printf("%d ", n2*i);
        sum+=n2*i;
      }
      else if(n2*i>n1){
        printf("sum=%d\n", sum);
        sum=0;
        i=0;
        break;
      }
    }
  }
  return 0;
}
