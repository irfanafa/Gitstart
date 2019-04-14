#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char ** argv)
{
  // if no arguments, the human tries to guess
  const bool human_guess = 1;
  unsigned int m; //human entry
  int i = 1;      //no of chance

  if(human_guess)
  {
    srand(time(0)); //synchronize the time to zero
    const unsigned int n = (rand() % 100);
    cout << "Random number: " << n << '\n';
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
}
