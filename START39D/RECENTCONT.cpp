#include<iostream>
#include<string>
using namespace std;

int main(){

     int n,t;

  cin>>t;
  while(t--){
    int count1 = 0, count2 = 0;
    string s1;
  cin>>n;
  for(int i=0;i<n;i++){
  cin>>s1;

    for(int i = 0; i < s1.length(); i++){
  if(s1[i]=='S'){
      count1++;
  }
  if(s1[i]=='L'){
      count2++;
  }
  
  }
  }
  cout<<endl;
  cout<<count1<<" "<<count2;
  }
    return 0;
}
