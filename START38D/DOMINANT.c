#include<stdio.h>

int main(){

int na,nb,nc,tc;

scanf("%d",&tc);
for(int i=0; i<tc; i++){

scanf("%d %d %d",&na,&nb,&nc);
if((na+nb < nc)||(nb+nc < na)||(na+nc < nb))
  printf("Yes\n");
else printf("No\n");}
  return 0;
}
