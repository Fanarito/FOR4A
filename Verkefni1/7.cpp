#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
  srand(time(NULL));
  char colors[6] = {'B', 'G', 'R', 'Y', 'O', 'P'};
  char chosen_colors[4];
  for (int i = 0; 4 > i; i++) {
    int x = rand() % 6;
    cout << x;
    chosen_colors[i] = colors[x];
  }
  cout << chosen_colors << endl;
  int tries = 0;
  bool won = false;
  while (tries < 12 && !won) {
    cout << "| B = Blue | G = Green | R = Red | Y = Yellow | O = Orange | P = "
            "Pink |"
         << endl;
    cout << "Pick your colors: ";
    char choice[4];
    cin >> choice;
    tries++;
    int correct = 0;
    int wrong_place = 0;
    for (int i = 0; 4 > i; i++) {
      if (chosen_colors[i] == choice[i]) {
        correct++;
        continue;
      }
      for (int x = 0; x < 4; x++) {
        if (choice[i] == chosen_colors[x]) {
          wrong_place++;
          goto outer;
        }
      }
    outer:
      continue;
    }
    cout << "Correct: " << correct << " Wrong place: " << wrong_place;
    if (correct == 4) {
      won = true;
    }
  }
  return 0;
}
