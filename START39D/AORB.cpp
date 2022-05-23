#include<iostream>
using namespace std;

int main(){

     int n,t;

  cin>>t;
  while(t--){
   int x,y;
   cin>>x>>y;

   if(((500-(2*x))+(1000-(4*(y+x))))>=((500-(2*(x+y)))+(1000-(4*y)))){
       cout<<(500-(2*x))+(1000-(4*(y+x)))<<endl;
   }
   else {
       cout<<((500-(2*(x+y)))+(1000-(4*y)))<<endl;
   }
  }
    return 0;
}
