/*
 * =====================================================================================
 *
 *       Filename:  chap5e12.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/15/2021 12:20:17 PM
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
  while(true)
  {

  char ans =' ';
  vector<int> result;
  cout<<"Do you want to play game(y/n)?\n";
  cin>>ans;

  if(ans=='n') return 0;

  /*int a;
  int i=0;
  while(i<4 && cin>>a){
    result.push_back(a);
    ++i;
  }
*/

  int a=0;
  for(int i=0;i<4;++i){
    a=randint(9);
    result.push_back(a);
  }

  for(int x: result)
    cout<<x<<endl;



  bool success = false;
  while(!success){

    cout<<"please enter your guess numbers.\n";

    vector<int> guess;
    for(int x;guess.size()<4;){
    cin>>x;
      guess.push_back(x);
    }

  int bull=0;
  int cow =0;
    for(int i=0;i<4;++i){
      for(int j=0;j<4;++j){
        if(guess[j]==result[i]){
           if(j==i)
           ++bull;
           else
           ++cow;
        }
      }
    }

    cout<<bull<<" bull and "<<cow<<" cow.\n";

    if(bull==4){
      success = true;
    }


  }
  }




}

