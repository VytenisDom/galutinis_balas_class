
#include "main.h"

int main() {
  int c = 1;
  int longestName = 20, longestSurname = 20;
  double inputPazymys;
  bool budas;
  bool naujas;
  string tipas;
  list<mokinys> mok;
  mokinys obj;
  cout << "Generuojami failai..." << endl;
  generateFiles();
  cout << "Sveiki, tai mokiniu galutiniu balu skaiciavimo sistema.\n" << endl;
  cout << "Varda ir pavarde veskite is karto,\nPasibaigus namu darbu balams\niveskite 0.\n\n";
  cout << "Skaityti is failo (1) ar rasyti ranka (0)? ";
  cin >> budas;
  if(budas) {
    obj.readFile(inputPazymys, mok);
  } else {
    obj.enterByHand(inputPazymys, naujas, mok);
  }
  //longestNameAndSurname(longestName, longestSurname, mok);

  cout << "Skaiciuoti pagal vidurki ar mediana? (vid / med) ";
  cin >> tipas;
  obj.printFile(tipas, longestName, longestSurname, mok);
  return 0;
}
