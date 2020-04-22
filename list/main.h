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

class mokinys {
public:
  string vardas;
  string pavarde;
  list<double> pazymiai;
  double vidurkis;
  double mediana;
  double egzaminas;

  void readFile(double &, list<mokinys> &);
  void enterByHand(double &, bool &, list<mokinys> &);
  void longestNameAndSurname(int &, int &, list<mokinys>);
  void printFile(string, int, int, list<mokinys> &);
  void studentSort(list<mokinys> &, list<mokinys> &, string);
};

bool compare(const mokinys &, const mokinys &);
void generateFiles();
