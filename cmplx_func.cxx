#include <iostream>
#include <complex>

using namespace std;

//Main function
int main(){

  complex<double> c;
  int N=100;
  
  double P[N];
  double dP=6.0/(N-1);
  
  complex<double> d[N];
  complex<double> ii = complex<double>(0,1);
  
  for (int i=0;i<N;i++){
    P[i]=i*dP;
    d[i]=exp(ii*P[i]);
  } 
  for(int i=0;i<N;i++)
    cout<< P[i] << "\t" << real(d[i]) << "\t" << imag(d[i]) << "\t" << abs(d[i]) << endl;
  
  return 0;
}
