#include <iostream>
#include <complex>
#include <cmath>


using namespace std;

//Declaration function for 1b
complex<double> b1(double c);


//Main function
int main(){

  complex<double> c;
  int N=100;
  
  double P[N];
  double dP=6.0/(N-1);
  P[0]=-3;
  
  complex<double> d[N];
  
  for (int i=0;i<N;i++){
    P[i]=P[0]+i*dP;
    d[i]=b1(P[i]);
  } 
  for(int i=0;i<N;i++)
    cout<< P[i] << "\t" << real(d[i]) << "\t" << imag(d[i]) << "\t" << abs(d[i]) << endl;
  
  return 0;
}


//Definition function for 1b
complex<double> b1(double c){
  complex<double> ii = complex<double>(0,1);
  complex<double> z;
  z = tan(c*(1.0+ii));
 return z;
}