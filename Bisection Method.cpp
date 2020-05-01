/*Arthur: Momenul Haque
Numerical Analysis
Bisection Method
xtanx + 1=0
Root is: 2.798
*/


#include<bits/stdc++.h>
using namespace std;
float func( float a);
 int main(){
 float a, b,x,d=0.0001,k,j;
int i=1;
cout<<"Enter a and b:"<<endl;
cin>>a>>b;
cout<<"SL "<<" a "<<" b "<<" X "<<" f(X) \n";
cout<<"----------------------------------------------------\n";
//Infinity loop
while(1){
 x=(a+b)/2;
// Generate iteration table
 cout<<i<<" "<<a<<" "<<b<<" "<<x<<" "<<func(x)<<"\n";
 if(func(x)>0)
 {
 b=x;
 }
 else{
 a=x;
 }
K=(a+b)/2;
 if(abs(x-k)<d)
 {
 break;
 }
i++;
}
printf("Root is=%.3lf",x);
return 0;
}


float func(float a){
return ((a*tan(a))+1);
}