#include <iostream>
using namespace std;
int main() {
cout << "Hello World!\n";

  //declaring a variable of the type string named "playerName"
  //please use camelCase when creating variable names
  string playerName;

  //define player name by giving it value of player
  playerName = "Player";

  //declare a variable of the type integer named "score"
  //define it's value as 4500
  int score = 4500;

  
  cout << "1 + 1 = " << 1 + 1 << ".\n";
  cout << "1 + 1 = " << '1' << '1' << ".\n";
  cout << "a + a = " << 'a' << 'a' << ".\n";

  //create a boolean named "lightIsOn" and set its value to true
  bool lightIsOn = true; 

  //logic
  //if(test) do this
  cout << "You flip the light switch.\n";
  if(lightIsOn == true) {
    lightIsOn = false;
    cout << "the light is now off .\n";
  }
  else {
    lightIsOn = true;
    cout << "the light is now on .\n";
  }
  lightIsOn = !lightIsOn; //this flips the boolean
}