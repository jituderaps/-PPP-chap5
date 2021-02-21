/*
 * =====================================================================================
 *
 *       Filename:  tt.cpp
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  02/16/2021 06:27:14 AM
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
  srand(time(0));
  int random;
  random=rand()%100;
  bool game = true;

  while(game){
  string choice=" ";
  cout<<"do you want to play game(yes/no)"<<endl;
  cin>>choice;


  if(choice=="no") return 0;

  int guess = 0;
  while(game){
    cout<<"please guess a number from 1-100"<<endl;
    cin>>guess;


    if(guess>random) cout<<"too high"<<endl;
    else if(guess<random) cout<<"too low"<<endl;
    else {
      cout<<"you win"<<endl;
      break;
    }
  }
  }
}
