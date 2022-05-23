#include<iostream>
#include<string>
using namespace std;

int main(){

     int n,t;
    int exp=(int)1e9+7;
  cin>>t;
  while(t--){
      string str;
      int num=1;
      cin>>n;
      cin>>str;
       for(int i = 0; i < n; i++){
           if(str[i] =='c' || str[i] =='g' || str[i] =='l' || str[i] =='r' ){
                num=(num*2)%exp;
           }
           
       }
       cout<<num<<endl;
  }  
    return 0;
}
