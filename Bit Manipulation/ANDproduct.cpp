#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  long long int t,a,b;
  cin>>t;
  while(t--){
    cin>>a>>b;
    printf("%lld\n",a & ~((1 << (int)log2(a^b)) - 1));
    }
  return 0;
}
