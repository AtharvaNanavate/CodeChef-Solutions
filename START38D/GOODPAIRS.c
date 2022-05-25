#include<stdio.h>

int main(){
int n,tc,i,j,count;
scanf("%d",&tc);

for(int l=0; l<tc; l++){

count=0;

scanf("%d",&n);
int a[n],b[n];
  for(int m=0;m<n;m++){
      scanf("%d",&a[m]);
  }
  for(int m=0;m<n;m++){
      scanf("%d",&b[m]);
  }


  for(int p=1;p<=n;p++){
      i=p;
      for(int q=1;q<=n;q++){
          j=q;
         
          if((i<j) && (a[i-1]==b[j-1]) && (a[j-1]==b[i-1]) &&(i>=1) &&(j<=n)){
              count++;
          }
      }
  }  
  
  printf("%d\n",count); 

}
  
  return 0;
}
