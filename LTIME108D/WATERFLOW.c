#include<stdio.h>

int main(){
int t;

scanf("%d",&t);
while(t--){
   int w,x,y,z,tot=0;
scanf("%d %d %d %d",&w,&x,&y,&z);
tot=w+(y*z);
if(tot>x){
    printf("overflow\n");
}

else if(tot<x){
    printf("unfilled\n");
}
else if(tot=x){
    printf("filled\n");
}

}
    
    return 0;
}
