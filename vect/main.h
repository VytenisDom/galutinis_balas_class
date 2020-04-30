#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include <random>
#include <chrono>
#include <ctime>

using std::string;
using std::to_string;
using std::milli;
using std::vector;
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

class mokinys {
public:
  string vardas;
  string pavarde;
  vector<double> pazymiai;
  double vidurkis;
  double mediana;
  double egzaminas;

  friend std::ostream& operator<<(std::ostream& out, const mokinys &a) {
    out << "--------------------\n"
    << "Vardas: " << a.vardas << '\n'
    << "Pavarde: " << a.pavarde << '\n'
    << "Vidurkis: " << a.vidurkis << '\n'
    << "Mediana: " << a.mediana << '\n'
    << "--------------------\n";
    return out;
  }

  void readFile(double &, vector<mokinys> &);
  void enterByHand(double &, bool &, vector<mokinys> &);
  void longestNameAndSurname(int &, int &, vector<mokinys>);
  void printFile(string, int, int, vector<mokinys> &);
  void studentSort(vector<mokinys> &, vector<mokinys> &, string);
};

bool compare(const mokinys &, const mokinys &);
void generateFiles();
