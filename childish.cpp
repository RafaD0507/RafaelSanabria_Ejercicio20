#include <iostream>

using namespace std;

double u_t_inicial(double x);

int main(){
  double c = 1.0;
  double x_max = 2.0;
  double T = 0.5;
  double x = 0;
  double dx = 0.1;
  double dt = 0.01;
  int N_x = x_max/dx+1;
  int N_t = T/dt;
  double *u = new double[N_x];
  
  for(int j = 0; j<=N_t; j++){
    x = 0;
    for(int i = 0; i<N_x; i++){
      if(j == 0){
	u[i] = u_t_inicial(x);
	x = x + dx;
      }else{
	if(i != 0 || i != N_x-1){
	  u[i] = u[i]-c*(dt/dx)*(u[i+1]-u[i]);
	}
      }
    }
  }
  x = 0;
  for(int i=0; i<N_x; i++){
    cout<<x<<" "<<u[i]<<endl;
    x = x+ dx;
  }
  return 0;
}


double u_t_inicial(double x){
  if(x>0.75 && x<1.25){
    return 1;
  }else{
    return 0;
  }
}
