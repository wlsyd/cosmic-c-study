#include <stdio.h> 

int main(){
  int d, h, m, s;
  while(1){
    printf("Enter a seconds>>");
    scanf("%d", &s);
    if(s==0) break;
    m=s/60;
    s=s%60;
    h=m/60;
    m=m%60;
    d=h/24;
    h=h%24;
    if(d!=0) printf("%dd", d);
    if(h!=0) printf("%dh", h);
    if(m!=0) printf("%dm", m);
    if(s!=0) printf("%ds", s);
    printf("\n");
  }
}
