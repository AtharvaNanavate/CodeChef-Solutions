#include<stdio.h>

int main(){

int a,b,m,tc,sd,sd1,sd2;

scanf("%d",&tc);
for(int i=0; i<tc; i++){

scanf("%d %d %d",&a,&b,&m);

if(a==b){
sd=0;
printf("%d\n",sd);
}

else if(a<b){
sd1=b-a;
sd2=(m-b)+a;

if(sd1<sd2){
  sd=sd1;
  printf("%d\n",sd);
}

else if(sd2<sd1){
  sd=sd2;
  printf("%d\n",sd);
}
else if(sd2==sd1){
  sd=sd2;
  printf("%d\n",sd);
}

}
else if(b<a){
  sd1=a-b;
  sd2=(m-a)+b;
  
  if(sd1<sd2){
  sd=sd1;
  printf("%d\n",sd);
}

else if(sd2<sd1){
  sd=sd2;
  printf("%d\n",sd);
}
else if(sd2==sd1){
  sd=sd2;
  printf("%d\n",sd);
}
}
}
  return 0;
}
