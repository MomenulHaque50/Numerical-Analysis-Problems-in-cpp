/*Arthur: Momenul Haque
Numerical Analysis
Iteration Method
x^3= 1-x^2
Root is: 0.7549
*/


#include<bits/stdc++.h>
using namespace std;
float func(float a ){
return (pow((a+1),-2));
}
float divfunc(float a ){
return (-2*pow((a+1),-3));
}
int main(){
 int a=0,b=1,p=1;
 float c, d=0.0001,x=0,k;
 if(divfunc(b)<b)
 {
 cout<<"Enter the value within the range of 0 and 1:";
 cin>>c;
 printf("SL-----------------------------X-----------------------------------f(X)\n");
 while(1)
 {
 printf("%d-------------------------%f-------------------------
%f\n",p,c,func(c));
 c=func(c);
 x=func(c);
 p++;
 if(abs(c-x)<d)
 {
 break;
 }
 }
 }
 else{
 cout<<"Invalid Equation";
 }
 printf("Root is: %.3f",c);
 return 0;
}