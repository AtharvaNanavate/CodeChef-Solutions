#include<iostream>
#include<string>
using namespace std;

int main(){

     int n,t;

  cin>>t;
  while(t--){
    int count=0;
  cin>>n;
    int a[n];
     for(int i = 0; i < n; i++){
         cin>>a[i];
     }
     for(int i = 0; i < n; i++){
         if(a[i]==a[i+1]){
             count++;
         }
     }
    cout<<n-count<<endl;
  }
    return 0;
}
