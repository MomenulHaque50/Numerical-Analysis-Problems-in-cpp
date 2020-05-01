/*
Arthur: Momenul Haque
Numerical Analysis
Ramanujan's Method for finding the smallest root.
f(x)= x^3-9x^2 + 26x -24 =0
Root is: 1.9462
*/

#include<bits/stdc++.h>

using namespace std;
float func(float a){

return (1-((13/12)*a-(3/8)*(a*a)+(1/24)*(a*a*a)));

}

int main(){

float a1, a2,a3;
a1=1.0833;
a2=-0.375;
a3=0.0416;

float b1,b2,b3,b4,b5,b6,b7,b8,b9;

 b1 =1;
 b2=a1;
 b3=a1*b2+a2*b1;
 b4=a1*b3+a2*b2+a3*b1;
 b5=a1*b4+a2*b3+a3*b2;
 b6=a1*b5+a2*b4+a3*b3;
 b7=a1*b6+a2*b5+a3*b4;
 b8=a1*b7+a2*b6+a3*b5;
 b9=a1*b8+a2*b7+a3*b6;

printf("Smallest root:\n");
 printf ("b1/b2=%f\n",b1/b2);
 printf ( "b2/b3=%f\n",b2/b3);
 printf ( "b3/b4=%f\n" ,b3/b4);
 printf ("b4/b5=%f\n",b4/b5);
 printf ("b5/b6=%f\n",b5/b6);
 printf ("b6/b7=%f\n",b6/b7);
 printf ("b7/b8=%f\n",b7/b8);
  printf ("b8/b9=%f\n",b8/b9);
cout<<"it appears as if the roots are converging at 2";
return 0;
}
