/*
 * =====================================================================================
 *
 *       Filename:  chap5e7.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/15/2021 05:05:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

double a,b,c;
void roots_of_quadratic()
{
  while(cin>>a>>b>>c){
    if(a==0){
      if(b==0) cout<<"no root (since there is no x)"<<'\n';
      else cout<<"x = "<<-c/b<<'\n';
    }

    else if(b==0){
    double ca = -c/a;
    if(ca<0) cout<<"no real root"<<'\n';
    else cout<<"the real root are: "<<sqrt(ca)<<","<<-sqrt(ca)<<'\n';
  }

    else{
      double sq=b*b-4*a*c;

      if(sq>0) cout<<"the real roots are: "<<(-b+sqrt(sq))/(2*a)<<","<<(-b-sqrt(sq))/(2*a)<<'\n';
      else if(sq==0) cout<<"the real roots is: "<<-b/(2*a)<<'\n';
      else cout<<"no real roots"<<'\n';
    }

    cout<<"please try again (enter a b c),if you wanna quit, Please write q and press enter\n";
}
}
int main()
{
 roots_of_quadratic();
  return 0;
}

