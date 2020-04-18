
#include "main.h"

int main() {
  int c = 1;
  int longestName = 0, longestSurname = 0;
  double inputPazymys;
  bool budas;
  bool naujas;
  string tipas;
  deque<mokinys> mok;
  cout << "Generuojami failai..." << endl;
  generateFiles();
  cout << "Sveiki, tai mokiniu galutiniu balu skaiciavimo sistema.\n" << endl;
  cout << "Varda ir pavarde veskite is karto,\nPasibaigus namu darbu balams\niveskite 0.\n\n";
  cout << "Skaityti is failo (1) ar rasyti ranka (0)? ";
  cin >> budas;
  if(budas) {
    readFile(inputPazymys, mok);
  } else {
    enterByHand(inputPazymys, naujas, mok);
  }
  longestNameAndSurname(longestName, longestSurname, mok);

  cout << "Skaiciuoti pagal vidurki ar mediana? (vid / med) ";
  cin >> tipas;
  printFile(tipas, longestName, longestSurname, mok);
  return 0;
}
