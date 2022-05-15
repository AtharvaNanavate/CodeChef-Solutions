#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        int n,m,calc=0,max=0;
    cin>>n>>m;
  int arr[n],res[n*n],k=0;
  
  for(int i=0; i<n; i++){
      cin>>arr[i];
  }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++,k++){
                res[k]=(arr[i]+arr[j])+((((arr[i]-arr[j])%m)+m)%m);
            }
        }
        
        for(int i=0; (i+1)<(n*n); i++){
            if(res[i]>max){
                max=res[i];
            }
                
            
        }
        cout<<max<<endl;
        // (a%b + b)%b;
    }
    return 0;
}
