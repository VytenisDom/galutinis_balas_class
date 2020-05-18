#pragma once

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <algorithm>
#include <random>
#include <chrono>
#include <ctime>

using std::string;
using std::to_string;
using std::milli;
using std::list;
using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::streamsize;
using std::numeric_limits;
using std::ifstream;
using std::ofstream;
using std::sort;
using std::exception;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::left;
using std::setw;

class Zmogus {
public:
  string vardas;
  string pavarde;
};
class Mokinys : public Zmogus {
public:
  list<double> pazymiai;
  double vidurkis;
  double mediana;
  double egzaminas;

  friend std::ostream& operator<<(std::ostream& out, const Mokinys &a) {
    out << "--------------------\n"
    << "Vardas: " << a.vardas << '\n'
    << "Pavarde: " << a.pavarde << '\n'
    << "Vidurkis: " << a.vidurkis << '\n'
    << "Mediana: " << a.mediana << '\n'
    << "--------------------\n";
    return out;
  }

  void readFile(double &, list<Mokinys> &);
  void enterByHand(double &, bool &, list<Mokinys> &);
  void longestNameAndSurname(int &, int &, list<Mokinys>);
  void printFile(string, int, int, list<Mokinys> &);
  void studentSort(list<Mokinys> &, list<Mokinys> &, string);
};

bool compare(const Mokinys &, const Mokinys &);
void generateFiles();
