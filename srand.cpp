// Random Number Generator 
/* 
Believe it or not but numbers arent random, by using the srand 
rand - random number using % to set a limit paramater; 
for loop - sets the amount of random numbers generated; 
srand (seed) - allows the output to be different everytime;
*/

// Black Jack

#include <iostream> 
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
  int y = 0;
  cout << "How many numbers do you want to generate?: ";
  cin >> y;
  // changes algorithm with time accesing the clock
  srand(time(0));
  //for loop print out 25 times 
  if (y > 0){
      for(int x = 0; x<y;x++){
        // randomizes a random number +1 shifts from 0 to 1
        cout << 1+(rand()%6) << endl;

      }
  }
  else
  {
    cout << "Invalid";
  }
}