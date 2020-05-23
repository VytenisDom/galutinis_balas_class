#include "main.h"

bool compare(const Mokinys &a, const Mokinys &b) {
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

void Mokinys::readFile(double &inputPazymys, list<Mokinys> &mok) {
  std::list<double>::iterator it, it1, it2;
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
      Mokinys m;
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
          for(int x = 0; x < m.pazymiai.size(); x++) {
            it = std::next(m.pazymiai.begin(), x);
            sum += *it;
          }
          m.vidurkis = (sum / m.pazymiai.size());
          sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) {
            it1 = std::next(m.pazymiai.begin(), x);
            for(int y = x+1; y < m.pazymiai.size(); y++) {
              it2 = std::next(m.pazymiai.begin(), y);
              if(*it1 > *it2) {
                double temp = *it1;
                *it1 = *it2;
                *it2 = temp;
              }
            }
          }
          if(m.pazymiai.size() % 2 != 0) {
            it1 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2);
            m.mediana = *it1;
          }
          else {
            it1 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2-1);
            it2 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2);
            m.mediana = (*it1 + *it2)/2;
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
    mok.sort([](const Mokinys &a, const Mokinys &b) { return a.vardas < b.vardas || (a.vardas == b.vardas && a.pavarde < b.pavarde); });
    //sort(mok.begin(), mok.end(), compare);
    auto end = std::chrono::steady_clock::now();
    auto diff = end - start;
    cout << "Skaitymas is failo uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
  } else {
    cout << "Failas neegzistuoja." << endl;
  }
}

void Mokinys::enterByHand(double &inputPazymys, bool &naujas, list<Mokinys> &mok) {
  std::list<double>::iterator it, it1, it2;
  for(int i = 0;;i++) {
    cout << "Prideti nauja mokini? (1 - taip, 0 - ne) ";
    cin >> naujas;
    if(naujas) {
      Mokinys m;
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
          for(int x = 0; x < m.pazymiai.size(); x++) {
            it = std::next(m.pazymiai.begin(), x);
            sum += *it;
          }
          m.vidurkis = (sum / m.pazymiai.size());
          sum = 0;
          for(int x = 0; x < m.pazymiai.size(); x++) {
            it1 = std::next(m.pazymiai.begin(), x);
            for(int y = x+1; y < m.pazymiai.size(); y++) {
              it2 = std::next(m.pazymiai.begin(), x);
              if(*it1 > *it2) {
                double temp = *it1;
                *it1 = *it2;
                *it2 = temp;
              }
            }
          }
          if(m.pazymiai.size() % 2 != 0) {
            it1 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2);
            m.mediana = *it1;
          }
          else {
            it1 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2-1);
            it2 = std::next(m.pazymiai.begin(), m.pazymiai.size()/2);
            m.mediana = (*it1 + *it2)/2;
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
  mok.sort([](const Mokinys &a, const Mokinys &b) { return a.vardas < b.vardas || (a.vardas == b.vardas && a.pavarde < b.pavarde); });
  //sort(mok.begin(), mok.end(), compare);
}

void Mokinys::longestNameAndSurname(int &longestName, int &longestSurname, list<Mokinys> mok) {
  std::list<Mokinys>::iterator it;
  for(int i = 0; i < mok.size(); i++) {
    it = std::next(mok.begin(), i);
    if(it->vardas.length() > longestName) longestName = it->vardas.length() + 1;
    if(it->pavarde.length() > longestSurname) longestSurname = it->pavarde.length() + 1;
  }
  if(longestName < 7) longestName = 7;
  if(longestSurname < 8) longestSurname = 8;
}

void Mokinys::studentSort(list<Mokinys> &mok, list<Mokinys> &mokBad, string tipas) {
  std::list<Mokinys>::iterator it;
  auto start = std::chrono::steady_clock::now();
  for(int i = 0; i < mok.size(); i++) {
    it = std::next(mok.begin(), i);
    if(tipas == "vid") {
      if(it->vidurkis*0.4 + it->egzaminas*0.6 < 5) {
        mokBad.push_back(*it);
        mok.erase(it);
        i--;
      }
    }
    if(tipas == "med") {
      if(it->mediana*0.4 + it->egzaminas*0.6 < 5) {
        mokBad.push_back(*it);
        mok.erase(it);
        i--;
      }
    }
  }
  auto end = std::chrono::steady_clock::now();
  auto diff = end - start;
  cout << "Mokiniu rusiavimas uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
}

void Mokinys::printFile(string tipas, int longestName, int longestSurname, list<Mokinys> &mok) {
  std::list<Mokinys>::iterator it;
  list<Mokinys> mokBad;
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

      it = std::next(mok.begin(), 0);
      for(int i = 0; i < mok.size(); i++) {
        cout << it;
        output_good.precision(2);
        output_good << it->vardas;
        for(int x = 0; x < longestName - it->vardas.length() + 1; x++) output_good << " ";
        output_good << it->pavarde;
        for(int x = 0; x < longestSurname - it->pavarde.length() + 1; x++) output_good << " ";
        if(it->pazymiai.size() > 0) output_good << fixed << it->vidurkis*0.4 + it->egzaminas*0.6 << endl;
        else output_good << fixed << it->egzaminas*0.6 << endl;
        it++;
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

      it = std::next(mokBad.begin(), 0);
      for(int i = 0; i < mokBad.size(); i++) {
        output_bad.precision(2);
        output_bad << it->vardas;
        for(int x = 0; x < longestName - it->vardas.length() + 1; x++) output_bad << " ";
        output_bad << it->pavarde;
        for(int x = 0; x < longestSurname - it->pavarde.length() + 1; x++) output_bad << " ";
        if(it->pazymiai.size() > 0) output_bad << fixed << it->vidurkis*0.4 + it->egzaminas*0.6 << endl;
        else output_bad << fixed << it->egzaminas*0.6 << endl;
        it++;
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

      it = std::next(mok.begin(), 0);
      for(int i = 0; i < mok.size(); i++) {
        output_good.precision(2);
        output_good << it->vardas;
        for(int x = 0; x < longestName - it->vardas.length() + 1; x++) output_good << " ";
        output_good << it->pavarde;
        for(int x = 0; x < longestSurname - it->pavarde.length() + 1; x++) output_good << " ";
        if(it->pazymiai.size() > 0) output_good << fixed << it->mediana*0.4 + it->egzaminas*0.6 << endl;
        else output_good << fixed << it->egzaminas*0.6 << endl;
        it++;
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
      output_bad << "Galutinis (Med.)" << endl;
      for(int x = 0; x < longestName + longestSurname + 16; x++) output_bad << "-";
      output_bad << endl;

      it = std::next(mokBad.begin(), 0);
      for(int i = 0; i < mokBad.size(); i++) {
        output_bad.precision(2);
        output_bad << it->vardas;
        for(int x = 0; x < longestName - it->vardas.length() + 1; x++) output_bad << " ";
        output_bad << it->pavarde;
        for(int x = 0; x < longestSurname - it->pavarde.length() + 1; x++) output_bad << " ";
        if(it->pazymiai.size() > 0) output_bad << fixed << it->mediana*0.4 + it->egzaminas*0.6 << endl;
        else output_bad << fixed << it->egzaminas*0.6 << endl;
        it++;
      }
      output_bad << endl;
      cout << "Rezultatai isvesti i output_bad.txt" << endl;
      auto end = std::chrono::steady_clock::now();
      auto diff = end - start;
      cout << "Blogu mokiniu irasymas i faila uztruko " <<  std::chrono::duration <double, milli> (diff).count() << " ms" << endl;
    }//output_bad
  }
}
