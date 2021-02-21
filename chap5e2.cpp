/*
 * =====================================================================================
 *
 *       Filename:  chap5e2.cpp
 *
 *    Description:
 *
 *        Version::q!  1.0
 *        Created:  02/14/2021 10:04:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

double ctok(double c)
{
  if(c < -273.15) error("Temperature can not be reached beyond this!");
  double k = c+273.15;
  return k;
}

double ktoc(double k)
{
  if(k<0) error("temperature can't reach to that point");
  double c = k-273.15;
  return c;
}

int main()
{
  try{
  double t =0;
  string u=" ";
  cin>>t>>u;

  if(u=="c" || u=="celsius"){
    double r_t = ctok(t);
    cout<<r_t<<" Kelvin";
  }

  if(u=="k" || u=="kelvin"){
    double r_t = ktoc(t);
    cout<<r_t<<" Celsius";
  }

  return 0;
  }

  catch(runtime_error& e){
    cerr<<"runtime_error: "<<e.what()<<'\n';
  }




}
