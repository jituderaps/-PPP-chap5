/*
 * =====================================================================================
 *
 *       Filename:  exception.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/12/2021 11:43:45 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include <iostream>


using namespace std;


//void error(string s1,string s2){
//    throw runtime_error(s1+s2);
//  }
int main()
{
  try{
    int a,b;
    cout<<"please enter two positive number"<<endl;
    cin>>a>>b;

    string s = "number must be postive";
    if(a<0 || b<0) throw runtime_error(s);

    cout<<"the sum is "<<a+b<<endl;

    return 0;
  }
  catch(runtime_error& e){
    cerr<<"runtime error: "<<e.what()<<endl;
    return 1;
  }
}

