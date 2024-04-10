#include<stdio.h>


int tax_(int x){
  if(x<=12000) return x*0.06;
  else if(x<=46000){
    return (x-12000)*0.15+tax_(12000);
  }
  else if(x<=88000){
    return (x-46000)*0.24+tax_(46000);
  }
  else if(x<=150000){
    return (x-88000)*0.35+tax_(88000);
  }
  else{
    return (x-150000)*0.38+tax_(150000);
  }
}


int main(){
  int s, tax;
  while(1){
    printf("Enter your annual salary (unit:1000won)>>");
    scanf("%d", &s);
    if (s==0) break;
    else{
      tax=tax_(s);
      if(tax>=1000){
        printf("your tax is %d", tax/1000);
        if(tax%1000==0) printf(",000");
        else if(tax%1000<10) printf(",00%d", tax%1000);
        else if(tax%1000<100) printf(",0%d", tax%1000);
        else printf(",%d", tax%1000);
      }
      else printf("%d", tax);
      printf(" thousand won\n");
    }
  }
  return 0;
}
