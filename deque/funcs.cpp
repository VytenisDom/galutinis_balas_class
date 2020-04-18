#include "main.h"

bool compare(const mokinys &a, const mokinys &b) {
  return (a.vardas < b.vardas || (a.vardas == b.vardas && a.pavarde < b.pavarde));
}

void generateFiles() {
  random_device dev;
  mt19937 rng(dev());
  uniform_int_distribution<std::mt19937::result_type> balas(1,10);

  {
    cout << "studentai1000.txt... ";
    auto start = std::chrono::steady_clock::now();
    ofstream out1000("studentai1000.txt");
    out1000 << left << setw(25) << "Vardas" << left << setw(25) << "Pavarde"
    << left << setw(6) << "ND1" << left << setw(6) << "ND2" << left
    << setw(6) << "ND3" << left << setw(20) << "Egzaminas" << endl;
    for(int i = 1; i <= 1000; i++) {
      out1000 << left << setw(25) << "Vardas" + to_string(i)
      << left << setw(25) << "Pavarde" + to_string(i)
      << left << setw(6) << balas(rng)
      << left << setw(6) << balas(rng)
      << left << setw(6) << balas(rng)
      << left << balas(rng);
      if(i < 1000) out1000 << endl;
    }
    out1000.close();
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    cout << std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  }/*Studentai1000.txt*/
  {
    cout << "studentai10000.txt... ";
    auto start = std::chrono::steady_clock::now();
    ofstream out10000("studentai10000.txt");
    out10000 << left << setw(25) << "Vardas" << left << setw(25) << "Pavarde"
    << left << setw(6) << "ND1" << left << setw(6) << "ND2" << left
    << setw(6) << "ND3" << left << setw(20) << "Egzaminas" << endl;
    for(int i = 1; i <= 10000; i++) {
      out10000 << left << setw(25) << "Vardas" + to_string(i)
      << left << setw(25) << "Pavarde" + to_string(i)
      << left << setw(6) << balas(rng)
      << left << setw(6) << balas(rng)
      << left << setw(6) << balas(rng)
      << left << balas(rng);
      if(i < 10000) out10000 << endl;
    }
    out10000.close();
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    cout << std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  }/*Studentai10000.txt*/
  // {
  //   cout << "studentai100000.txt... ";
  //   auto start = std::chrono::steady_clock::now();
  //   ofstream out100000("studentai100000.txt");
  //   out100000 << left << setw(25) << "Vardas" << left << setw(25) << "Pavarde"
  //   << left << setw(6) << "ND1" << left << setw(6) << "ND2" << left
  //   << setw(6) << "ND3" << left << setw(20) << "Egzaminas" << endl;
  //   for(int i = 1; i <= 100000; i++) {
  //     out100000 << left << setw(25) << "Vardas" + to_string(i)
  //     << left << setw(25) << "Pavarde" + to_string(i)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << balas(rng);
  //     if(i < 100000) out100000 << endl;
  //   }
  //   out100000.close();
  //   auto end = std::chrono::steady_clock::now();
  //   auto diff = end - start;
  //   cout << std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  // }/*Studentai100000.txt*/
  // {
  //   cout << "studentai1000000.txt... ";
  //   auto start = std::chrono::steady_clock::now();
  //   ofstream out1000000("studentai1000000.txt");
  //   out1000000 << left << setw(25) << "Vardas" << left << setw(25) << "Pavarde"
  //   << left << setw(6) << "ND1" << left << setw(6) << "ND2" << left
  //   << setw(6) << "ND3" << left << setw(20) << "Egzaminas" << endl;
  //   for(int i = 1; i <= 1000000; i++) {
  //     out1000000 << left << setw(25) << "Vardas" + to_string(i)
  //     << left << setw(25) << "Pavarde" + to_string(i)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << balas(rng);
  //     if(i < 1000000) out1000000 << endl;
  //   }
  //   out1000000.close();
  //   auto end = std::chrono::steady_clock::now();
  //   auto diff = end - start;
  //   cout << std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  // }/*Studentai1000000.txt*/
  // {
  //   cout << "studentai10000000.txt... ";
  //   auto start = std::chrono::steady_clock::now();
  //   ofstream out10000000("studentai10000000.txt");
  //   out10000000 << left << setw(25) << "Vardas" << left << setw(25) << "Pavarde"
  //   << left << setw(6) << "ND1" << left << setw(6) << "ND2" << left
  //   << setw(6) << "ND3" << left << setw(20) << "Egzaminas" << endl;
  //   for(int i = 1; i <= 10000000; i++) {
  //     out10000000 << left << setw(25) << "Vardas" + to_string(i)
  //     << left << setw(25) << "Pavarde" + to_string(i)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << setw(6) << balas(rng)
  //     << left << balas(rng);
  //     if(i < 10000000) out10000000 << endl;
  //   }
  //   out10000000.close();
  //   auto end = std::chrono::steady_clock::now();
  //   auto diff = end - start;
  //   cout << std::chrono::duration <double, milli> (diff).count() << " ms\n" << endl;
  // }/*Studentai10000000.txt*/

}

void readFile(double &inputPazymys, deque<mokinys> &mok) {
  string failas;
  cout << "Galimi failai:" << endl;
  cout << "studentai1000.txt" << endl;
  cout << "studentai10000.txt" << endl;
  cout << "studentai100000.txt" << endl;
  cout << "studentai1000000.txt" << endl;
  cout << "studentai10000000.txt" << endl;
  cout << "Pasirinkite faila: ";
  cin >> failas;
  ifstream input(failas);
  string ndValue = "";
  int ndCount = 0;
  if(input) {
    auto start = std::chrono::steady_clock::now();
    input >> ndValue >> ndValue >> ndValue;
    while(ndValue[0] == 'N') {
      input >> ndValue;
      ndCount++;
    }
    while (!input.eof()) {
      mokinys m;
      input >> m.vardas >> m.pavarde;
        for (int i = 0; i < ndCount; i++) {
          if(input >> inputPazymys && inputPazymys >= 1 && inputPazymys <= 10) {
            m.pazymiai.push_back(inputPazymys);
          } else {
            m.pazymiai.push_back(0);
            if(m.pavarde[m.pavarde.length()-1] != ')') m.pavarde = m.pavarde + "(neteisingi balai)";
            input.clear();
            input.ignore(256, ' ');
          }
        }
        if(m.pazymiai.size() > 0) {
          double sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) sum += m.pazymiai.at(x);
          m.vidurkis = (sum / m.pazymiai.size());
          sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) {
            for(int y = x+1; y < m.pazymiai.size(); y++) {
              if(m.pazymiai.at(x) > m.pazymiai.at(y)) {
                double temp = m.pazymiai.at(x);
                m.pazymiai.at(x) = m.pazymiai.at(y);
                m.pazymiai.at(y) = temp;
              }
            }
          }
          if(m.pazymiai.size() % 2 != 0) m.mediana = m.pazymiai.at(m.pazymiai.size()/2);
          else {
            m.mediana = (m.pazymiai.at(m.pazymiai.size()/2-1) + m.pazymiai.at(m.pazymiai.size()/2))/2;
          }
        }
      if(input >> inputPazymys && inputPazymys >= 1 && inputPazymys <= 10) {
        m.egzaminas = inputPazymys;
      } else {
        m.egzaminas = 0;
        if(m.pavarde[m.pavarde.length()-1] != ')') m.pavarde = m.pavarde + "(neteisingi balai)";
        input.clear();
        input.ignore(256, '\n');
      }
      mok.push_back(m);
    }
    input.close();
    sort(mok.begin(), mok.end(), compare);
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    cout << "Skaitymas is failo uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  } else {
    cout << "Failas neegzistuoja." << endl;
  }
}

void enterByHand(double &inputPazymys, bool &naujas, deque<mokinys> &mok) {
  for(int i = 0;;i++) {
    cout << "Prideti nauja mokini? (1 - taip, 0 - ne) ";
    cin >> naujas;
    if(naujas) {
      mokinys m;
      cout << "Pilnas mokinio vardas: ";
      cin >> m.vardas >> m.pavarde;
      for(int j = 0;;j++) {
        for (;;) {
          cout << "Namu darbu balas: ";
          if (cin >> inputPazymys && inputPazymys >= 0 && inputPazymys <= 10) {
            break;
          } else {
            cout << "Iveskite bala! (Pasibaigus balams - iveskite 0)" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
          }
        }
        if(inputPazymys == 0) break;
        else {
          m.pazymiai.push_back(inputPazymys);
        }
        if(m.pazymiai.size() > 0) {
          double sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) sum += m.pazymiai.at(x);
          m.vidurkis = (sum / m.pazymiai.size());
          sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) {
            for(int y = x+1; y < m.pazymiai.size(); y++) {
              if(m.pazymiai.at(x) > m.pazymiai.at(y)) {
                double temp = m.pazymiai.at(x);
                m.pazymiai.at(x) = m.pazymiai.at(y);
                m.pazymiai.at(y) = temp;
              }
            }
          }
          if(m.pazymiai.size() % 2 != 0) m.mediana = m.pazymiai.at(m.pazymiai.size()/2);
          else {
            m.mediana = (m.pazymiai.at(m.pazymiai.size()/2-1) + m.pazymiai.at(m.pazymiai.size()/2))/2;
          }
        }
      }
      for (;;) {
        cout << "Egzamino balas: ";
        if (cin >> inputPazymys && inputPazymys >= 1 && inputPazymys <= 10) {
          m.egzaminas = inputPazymys;
          break;
        } else {
          cout << "Iveskite bala!" << endl;
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
      }
      mok.push_back(m);
    } else break;
  }

  sort(mok.begin(), mok.end(), compare);
}

void longestNameAndSurname(int &longestName, int &longestSurname, deque<mokinys> mok) {
  for(int i = 0; i < mok.size(); i++) {
    if(mok.at(i).vardas.length() > longestName) longestName = mok.at(i).vardas.length() + 1;
    if(mok.at(i).pavarde.length() > longestSurname) longestSurname = mok.at(i).pavarde.length() + 1;
  }
  if(longestName < 7) longestName = 7;
  if(longestSurname < 8) longestSurname = 8;
}

void studentSort(deque<mokinys> &mok, deque<mokinys> &mokBad, string tipas) {
  auto start = std::chrono::steady_clock::now();
  for(int i = 0; i < mok.size(); i++) {
    if(tipas == "vid") {
      if(mok.at(i).vidurkis*0.4 + mok.at(i).egzaminas*0.6 < 5) {
        mokBad.push_back(mok.at(i));
        mok.erase(mok.begin() + i);
        i--;
      }
    }
    if(tipas == "med") {
      if(mok.at(i).mediana*0.4 + mok.at(i).egzaminas*0.6 < 5) {
        mokBad.push_back(mok.at(i));
        mok.erase(mok.begin() + i);
        i--;
      }
    }
  }
  auto end = std::chrono::steady_clock::now();
  auto diff = end - start;
  cout << "Mokiniu rusiavimas uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
}

void printFile(string tipas, int longestName, int longestSurname, deque<mokinys> &mok) {
  deque<mokinys> mokBad;
  ofstream output_good("output_good.txt");
  ofstream output_bad("output_bad.txt");
  if(tipas == "vid") {
    studentSort(mok,mokBad,tipas);
    {
      auto start = std::chrono::steady_clock::now();
      output_good << endl;
      output_good << "Vardas ";
      for(int x = 0; x < longestName - 6; x++) output_good << " ";
      output_good << "Pavarde ";
      for(int x = 0; x < longestSurname - 7; x++) output_good << " ";
      output_good << "Galutinis (Vid.)" << endl;
      for(int x = 0; x < longestName + longestSurname + 16; x++) output_good << "-";
      output_good << endl;

      for(int i = 0; i < mok.size(); i++) {
        output_good.precision(2);
        output_good << mok.at(i).vardas;
        for(int x = 0; x < longestName - mok.at(i).vardas.length() + 1; x++) output_good << " ";
        output_good << mok.at(i).pavarde;
        for(int x = 0; x < longestSurname - mok.at(i).pavarde.length() + 1; x++) output_good << " ";
        if(mok.at(i).pazymiai.size() > 0) output_good << fixed << mok.at(i).vidurkis*0.4 + mok.at(i).egzaminas*0.6 << endl;
        else output_good << fixed << mok.at(i).egzaminas*0.6 << endl;
      }
      output_good << endl;
      cout << "Rezultatai isvesti i output_good.txt" << endl;
      auto end = std::chrono::steady_clock::now();
      auto diff = end - start;
      cout << "Geru mokiniu irasymas i faila uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
    }//output_good
    {
      auto start = std::chrono::steady_clock::now();
      output_bad << endl;
      output_bad << "Vardas ";
      for(int x = 0; x < longestName - 6; x++) output_bad << " ";
      output_bad << "Pavarde ";
      for(int x = 0; x < longestSurname - 7; x++) output_bad << " ";
      output_bad << "Galutinis (Vid.)" << endl;
      for(int x = 0; x < longestName + longestSurname + 16; x++) output_bad << "-";
      output_bad << endl;

      for(int i = 0; i < mokBad.size(); i++) {
        output_bad.precision(2);
        output_bad << mokBad.at(i).vardas;
        for(int x = 0; x < longestName - mokBad.at(i).vardas.length() + 1; x++) output_bad << " ";
        output_bad << mokBad.at(i).pavarde;
        for(int x = 0; x < longestSurname - mokBad.at(i).pavarde.length() + 1; x++) output_bad << " ";
        if(mokBad.at(i).pazymiai.size() > 0) output_bad << fixed << mokBad.at(i).vidurkis*0.4 + mokBad.at(i).egzaminas*0.6 << endl;
        else output_bad << fixed << mokBad.at(i).egzaminas*0.6 << endl;
      }
      output_bad << endl;
      cout << "Rezultatai isvesti i output_bad.txt" << endl;
      auto end = std::chrono::steady_clock::now();
      auto diff = end - start;
      cout << "Blogu mokiniu irasymas i faila uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
    }//output_bad
  }
  if(tipas == "med") {
    studentSort(mok,mokBad,tipas);
    {
      auto start = std::chrono::steady_clock::now();
      output_good << endl;
      output_good << "Vardas ";
      for(int x = 0; x < longestName - 6; x++) output_good << " ";
      output_good << "Pavarde ";
      for(int x = 0; x < longestSurname - 7; x++) output_good << " ";
      output_good << "Galutinis (Med.)" << endl;
      for(int x = 0; x < longestName + longestSurname + 16; x++) output_good << "-";
      output_good << endl;

      for(int i = 0; i < mok.size(); i++) {
        output_good.precision(2);
        output_good << mok.at(i).vardas;
        for(int x = 0; x < longestName - mok.at(i).vardas.length() + 1; x++) output_good << " ";
        output_good << mok.at(i).pavarde;
        for(int x = 0; x < longestSurname - mok.at(i).pavarde.length() + 1; x++) output_good << " ";
        if(mok.at(i).pazymiai.size() > 0) output_good << fixed << mok.at(i).mediana*0.4 + mok.at(i).egzaminas*0.6 << endl;
        else output_good << fixed << mok.at(i).egzaminas*0.6 << endl;
      }
      output_good << endl;
      cout << "Rezultatai isvesti i output_good.txt" << endl;
      auto end = std::chrono::steady_clock::now();
      auto diff = end - start;
      cout << "Geru mokiniu irasymas i faila uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
    }//output_good
    {
      auto start = std::chrono::steady_clock::now();
      output_bad << endl;
      output_bad << "Vardas ";
      for(int x = 0; x < longestName - 6; x++) output_bad << " ";
      output_bad << "Pavarde ";
      for(int x = 0; x < longestSurname - 7; x++) output_bad << " ";
      output_bad << "Galutinis (Vid.)" << endl;
      for(int x = 0; x < longestName + longestSurname + 16; x++) output_bad << "-";
      output_bad << endl;

      for(int i = 0; i < mokBad.size(); i++) {
        output_bad.precision(2);
        output_bad << mokBad.at(i).vardas;
        for(int x = 0; x < longestName - mokBad.at(i).vardas.length() + 1; x++) output_bad << " ";
        output_bad << mokBad.at(i).pavarde;
        for(int x = 0; x < longestSurname - mokBad.at(i).pavarde.length() + 1; x++) output_bad << " ";
        if(mokBad.at(i).pazymiai.size() > 0) output_bad << fixed << mokBad.at(i).mediana*0.4 + mokBad.at(i).egzaminas*0.6 << endl;
        else output_bad << fixed << mokBad.at(i).egzaminas*0.6 << endl;
      }
      output_bad << endl;
      cout << "Rezultatai isvesti i output_bad.txt" << endl;
      auto end = std::chrono::steady_clock::now();
      auto diff = end - start;
      cout << "Blogu mokiniu irasymas i faila uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
    }//output_bad
  }
}
