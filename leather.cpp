#include <iostream>

int convert = 0;

int numArmor(int leather, int strips) {
  if (leather < 4) return 0;
  if (leather > 4 && strips < 3) {
    convert++;
    return numArmor(leather - 1, strips + 4);
  } else if (leather == 4 && strips == 3) {
    return 1;
  } else {
    return 1 + numArmor(leather - 4, strips - 3);
  }
}

int main() {
  int leather;
  int strips;
  std::cout << "Leather? ";
  std::cin >> leather;
  std::cout << "Strips? ";
  std::cin >> strips;
  int arm = numArmor(leather, strips);
  std::cout << "You can make " << arm << " sets of armor\n";
  std::cout << "Which requires " << (arm * 4) << " leather and " << (arm * 3) << " strips\n";
  std::cout << "Converting " << convert << " leather to strips\n";
}
