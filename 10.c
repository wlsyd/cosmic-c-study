#include <stdio.h>

int m;

void gongyaksoo(int a, int b){
  int r;
  r=a%b;
  if(r!=0){
    gongyaksoo(b,r);
  }
  else if(r==0)
    printf("GCD=%d, LCM=%d\n", b, m/b);
}

int main() {
  int n1, n2, GCD; 
  while (1) {
    printf("Enter two integers>>");
    scanf("%d%d", &n1, &n2);
    if(n1==0 & n2==0) break;
    m=n1*n2;
    if(n1>=n2){
      gongyaksoo(n1,n2);
    }
    else{
      gongyaksoo(n2,n1);
    }
  }
  return 0;
}
