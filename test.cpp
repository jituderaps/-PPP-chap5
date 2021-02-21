/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/11/2021 03:55:51 PM
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
try
{
  vector<int> v;


  for(int x;cin>>x;){
    v.push_back(x);
  }

  string s1 = "yayyy";
  if(v[1]==2) error(" ");

  for(int i=0;i<=v.size();i++)
  {
    cout<<"v["<<i<<"]=="<<v[i]<<endl;
  }
}

catch(out_of_range)
{
  cerr<<"Oops! range error";
  return 1;
}
catch(runtime_error)
{
  cerr<<"yayyyyy";
  return 3;
}
catch(...)
{
  cerr<<"exception , an error has occured";
return 2;
}

return 0;
}


