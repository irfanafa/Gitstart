#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char ** argv)
{

  srand(time(0)); //synchronize the time to zero
  const bool token = (rand() % 2);
  // if no arguments, the human tries to guess
  bool human_guess = token;
  unsigned int m; //human entry
  int i = 1;      //no of chance

  if(human_guess)
  {

    cout << "Human Play against Computer" << endl;
    const unsigned int n = (rand() % 100);
    //cout << "Random number: " << n << '\n';
    while(true)
    {
      // Ask human to enter number
      cout << "Please enter a number (1-100): "; cin >> m;
      //check the guess with the number
      if(m == n)
      {
        cout << "Great!!!, You have found it in " << i << " chance " << endl;
        break;
      }
      else if(m < n){
        cout << "you have entered a small number" << endl;
        i++;
      }
      else{
        cout << "you have entered a large number" << endl;
        i++;
      }
    }
  }
  else{

    cout << "Computer Play against Human" << endl;
    unsigned int lower = 1, upper = 100;
    unsigned int guess, response;
    while(true)
    {
      guess = 0.5*(lower + upper);
      cout << " 0 if correct, 1 if small, 2 if large " << endl;
      cout << " Is it " << guess << " ? ";
      cin >> response;
      if(response == 0)
      {
        cout << "Yes I Got you in " << i << " chance!!! "<< endl;
        break;
      }
      else if(lower >= upper)
      {
        cout << "you are cheating" << endl;
        break;
      }
      else if(response == 1)
      {
        lower = guess + 1;
        i++;
      }
      else
      {
        upper = guess - 1;
        i++;
      }
    }
  }
}
