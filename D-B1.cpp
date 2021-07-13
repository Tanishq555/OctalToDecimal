#include <iostream>
#include <math.h>
using namespace std;

int OctalToDecimal (int n){
int a=8;
int b=1;
int ans=0;
while (n>0)
{
    int c=n%10;
     ans = ans+c*b;
     b=b*8;
     n=n/10;
}
return ans;

}
int main(){
    int n;
    cin>>n;
    cout<<OctalToDecimal(n)<<endl;
}