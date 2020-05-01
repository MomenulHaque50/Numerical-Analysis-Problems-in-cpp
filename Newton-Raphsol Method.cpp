/*Arthur: Momenul Haque
Numerical Analysis
Newton-Raphsol Method
x^3-2*x-5=0
Root is: 2.094568
*/


#include<bits/stdc++.h>
using namespace std;
float func(float a ){
return ((a*a*a)-2*a-5);
}
float divfunc(float a ){
return (3*(a*a)-2);
}
int main(){
 int p=1;
 float c, d=0.0001,x=0,k;
 cout<<"Enter the value :";
 cin>>c;
 printf("SL----------X(n)-------------------f(X(n))-----------------X(n+1)\n");
 while(1)
 {
 x=c-((func(c)/(divfunc(c))));
 printf("%d-------- %f----------------------%f-----------------
%f\n",p,c,func(c),x);
 c=x;
 k=c-((func(c)/(divfunc(c))));
 p++;
 if(abs(k-x)<d)
 {
 break;
 }
 }
 printf("Root is: %.3f",c);
 return 0;
}