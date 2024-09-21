#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
  string name;
  srand((unsigned int) time(NULL));
  int number = ( rand() % 5) + 1;
  cout<<"Enter your name:  " <<endl;
  getline(cin,name);
  int guess=0;

  do {

    cout<<"Enter your guess:  " <<endl;
    cin>>guess;

    if(guess > number)
    {
      cout<<"guess is to high" <<endl;
    }
    else if(guess < number)
    {
      cout<<"guess is to low" <<endl;
    }
    else
      cout<<name<<"  you guessed the number"<<endl;
  }
  while(guess != number);
  cout<<"Thanks for playing" <<endl;
  return 0;
}
