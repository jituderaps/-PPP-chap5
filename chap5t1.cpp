/*
 * =====================================================================================
 *
 *       Filename:  chap5t1.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/09/2021 09:03:22 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"


double area(double l,double w)
{
  if(l<=0 || w<=0)  return -1;

    //error("non positive argument for area()")
  return l*w;
}

double framed_area(double a,double b)
{
  constexpr double frame_width = 2;
  return area(a-frame_width,b-frame_width);
}

int main()
{
  double fl,fw;
  double l,w;

  double a1,a2;

  cout<<"please enter length and width of frame area.."<<endl;
  cin>>fl>>fw;

  if(fl<0) error("yassss");

  cout<<"please enter length and width of original area.."<<endl;
  cin>>l>>w;

  a1 = area(l,w);
  a2 = framed_area(fl,fw);

  double ratio = a1/a2;

  cout<<"ratio :"<<ratio<<"."<<endl;

  return 0;


}


