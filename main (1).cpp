#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {

  srand(time(0));

  int score = 200;

  if (true) {
    int score = 5;
  }

  cout << "local score = " << score << ",\n";

  cout << "Score = " << score << ".\n";

  if (true) {
    int score = 5;
    cout << "local score = " << score << ".\n";
  }
  int count = 0;
  int randNum = rand() % 100 + 1;

  cout << "The number is " << randNum << ".\n";

  if (randNum > 50) {
    cout << "Its greater than 50!\n";
    count += 1;
  }
  randNum = rand() % 100 + 1;

  cout << "The number is " << randNum << ".\n";

  if (randNum > 50) {
    cout << "Its greater than 50!\n";
    count += 1;
  }
  randNum = rand() % 100 + 1;

  cout << "The number is " << randNum << ".\n";

  if (randNum > 50) {
    cout << "Its greater than 50!\n";
    count += 1;
  }
  randNum = rand() % 100 + 1;

  cout << "The number is " << randNum << ".\n";

  if (randNum > 50) {
    cout << "Its greater than 50!\n";
    count += 1;
  }

  cout << "There where " << count << " random numbers greater than 50.\n";

  int loopCount = 0;
  while (loopCount < 100) {
    loopCount += 1;
    cout << "looped " << loopCount << " times.\n";
    int randNum = rand() % 100 + 1;
    if (randNum > 50) {
      count += 1;
    }
  }
  cout << "There where " << count << " random numbers greater than 50.\n";
}