#include <iostream>

using namespace std;

double u_t_inicial(double x);

int main(){
  double c = 1.0;
  double x_max = 2.0;
  double x = 0;
  double dx = 0.1;
  double dt = 0.01;
  double N_x = x_max/dx;
  double u;
  for(int i = 0; i<=N_x; i++){
    u = u_t_inicial(x);
    cout<<x<<" "<<u<<endl;
    x = x + dx;
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
