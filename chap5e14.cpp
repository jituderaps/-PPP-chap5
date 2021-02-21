/*
 * =====================================================================================
 *
 *       Filename:  chap5e14.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/16/2021 07:23:37 AM
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

  cout<<"please enter the day name and its value\n";

  vector<string> days1={"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
  vector<string> days2={"mon","tue","wed","thu","fri","sat","sun"};
  vector<int> v_mon;
  vector<int> v_tue;
  vector<int> v_wed;
  vector<int> v_thu;
  vector<int> v_fri;
  vector<int> v_sat;
  vector<int> v_sun;

  vector<string> entry_day;

  string d = " ";
  int v = 0;
  int rejected_val = 0;

  while(true){
    cin>>d;
    if(d=="|") break;
    cin>>v;


    bool match= false;
    for(int i=0;i<days1.size();++i){
      if(d==days1[i] || d==days2[i]){
        match = true;
        if(i==0) v_mon.push_back(v);
        else if(i==1) v_tue.push_back(v);
        else if(i==2) v_wed.push_back(v);
        else if(i==3) v_thu.push_back(v);
        else if(i==4) v_fri.push_back(v);
        else if(i==5) v_sat.push_back(v);
        else if(i==6) v_sun.push_back(v);
      }
    }

    if(!match)
        rejected_val+=1;

  }

    int sum_mon=0;
    for(int v:v_mon) sum_mon+=v;

    int sum_tue=0;
    for(int v:v_tue) sum_tue+=v;

    int sum_wed=0;
    for(int v:v_wed) sum_wed+=v;

    int sum_thu=0;
    for(int v:v_thu) sum_thu+=v;

    int sum_fri=0;
    for(int v:v_fri) sum_fri+=v;

    int sum_sat=0;
    for(int v:v_sat) sum_sat+=v;

    int sum_sun=0;
    for(int v:v_sun) sum_sun+=v;


    cout<<"monday total   : "<<sum_mon<<endl;
    cout<<"tuesday total  : "<<sum_tue<<endl;
    cout<<"wednesday total: "<<sum_wed<<endl;
    cout<<"thursday total : "<<sum_thu<<endl;
    cout<<"friday total   : "<<sum_fri<<endl;
    cout<<"saturday total : "<<sum_sat<<endl;
    cout<<"sunday total   : "<<sum_sun<<endl;
    cout<<"\nNo. of rejected values: "<<rejected_val;

    return 0;



}
