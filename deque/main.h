#pragma once

#include <iostream>
#include <string>
#include <deque>
#include <fstream>
#include <algorithm>
#include <random>
#include <chrono>
#include <ctime>

using std::string;
using std::to_string;
using std::milli;
using std::deque;
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
  deque<double> pazymiai;
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

  void readFile(double &, deque<Mokinys> &);
  void enterByHand(double &, bool &, deque<Mokinys> &);
  void longestNameAndSurname(int &, int &, deque<Mokinys>);
  void printFile(string, int, int, deque<Mokinys> &);
  void studentSort(deque<Mokinys> &, deque<Mokinys> &, string);
};

bool compare(const Mokinys &, const Mokinys &);
void generateFiles();
