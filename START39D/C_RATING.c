#include<stdio.h>

int main(){
  int x,y,t;

  scanf("%d",&t);
  while(t--){

  scanf("%d %d",&x,&y);
  
  int ans = (y-x)/8;
  if((x+8*ans)>=y)
  printf("%d\n",ans);
  else
  printf("%d\n",ans+1);

  }
  return 0;
}
