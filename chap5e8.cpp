/*
 * =====================================================================================
 *
 *       Filename:  chap5e8.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/15/2021 10:40:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include "std_lib_facilities.h"

int main()
{
  try{
  int n=0;
  vector<double> list;
  cout<<"please enter the number of values you want to sum\n";
  cin>>n;

  cout<<"please enter some integer(press | to stop)\n";

  for(double i;cin>>i;)
    list.push_back(i);
  if(n>list.size())
    error("you didnt enter that much numbers");

  double sum=0;
  for(int i=0;i<n;++i)
    sum+=list[i];

  double diff=0;
  vector<double> dv;
  for(int i=1;i<n;++i){
    diff=list[i]-list[i-1];
    dv.push_back(diff);
  }

  cout<<"the sum of first("<<n<<")";
  for(int i=0;i<n;i++)
    cout<<list[i]<<" ";

  cout<<" is :"<<sum<<'\n';


  cout<<"the difference between entries is :";
  for(double x :dv)
    cout<<x<<",";

  return 0;
  }


catch(runtime_error& e){
  cout<<"run_time_error: "<<e.what();
}
}
