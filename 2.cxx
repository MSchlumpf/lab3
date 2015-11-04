#include <iostream>
#include <complex>
#include <cmath>


using namespace std;

//Main function
int main(){
  
  int N=1000, M=400;
  double Re[N];
  double Im[N];
  double dx = 4.0/(N-1);
  double tol = 1e-15;
  int i,j;
  
  //for-Loop for realpart
  for(i=0;i<N;i++){
  Re[i]=-2.0+i*dx;
  
  //for-loop for imagpart
  for(j=0;j<N;j++){
  Im[j]=-2.0+j*dx;
  
  complex<double> z, zz;
  z =complex<double> (Re[i],Im[j]);
  
  //for-loop for iteration
  int k;
  for(k=0;k<M;k++){
  
  zz = z;
  z = z - (z*z*z-1.0)/(3.0*z*z);
  if (abs((abs(z)-abs(zz)))<tol) break;
  }
  
  cout << Re[i] << "\t" << Im[j] << "\t" << k << endl;
  }
  }

  return 0;
}