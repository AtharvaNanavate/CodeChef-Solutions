#include<stdio.h>

int main(){
int t,n,count;

scanf("%d",&t);
while(t--){
scanf("%d",&n);
int arr[n];
count=0;

for(int i=0; i<n;i++){
scanf("%d",&arr[i]);
}

for(int i=0; i<n;i++){
    if(arr[i]>=1000){
        count++;
    }
}

printf("%d\n",count);
}
    
    return 0;
}
