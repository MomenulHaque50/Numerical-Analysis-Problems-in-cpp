/*Arthur: Momenul Haque
Numerical Analysis
False position method or regula-falsi method or method of chords
xtanx + 1= 0
Root is : 2.798
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
while(1){
 x=((a*func(b))-(b*func(a)))/(func(b)-func(a));
 cout<<i<<" "<<a<<" "<<b<<" "<<x<<" "<<func(x)<<"\n";
 if(func(x)>0)
 {
 b=x;
 }
 else{
 a=x;
 }
 k=((a*func(b))-(b*func(a)))/(func(b)-func(a));
 if(abs(x-k)<d)
 {
 break;
 }
i++;
}
printf("Root is=%.3lf",x);
}
float func(float a){
return ((a*tan(a))+1);
}