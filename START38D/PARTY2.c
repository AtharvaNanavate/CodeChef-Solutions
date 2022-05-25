#include<stdio.h>

int main(){

int n,x,k,tc;

scanf("%d",&tc);
for(int i=0; i<tc; i++){

scanf("%d %d %d",&n,&x,&k);
if(n*x <= k)
  printf("Yes\n");
else printf("No\n");}
  return 0;
}
