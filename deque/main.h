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

class mokinys {
public:
  string vardas;
  string pavarde;
  deque<double> pazymiai;
  double vidurkis;
  double mediana;
  double egzaminas;

  void readFile(double &, deque<mokinys> &);
  void enterByHand(double &, bool &, deque<mokinys> &);
  void longestNameAndSurname(int &, int &, deque<mokinys>);
  void printFile(string, int, int, deque<mokinys> &);
  void studentSort(deque<mokinys> &, deque<mokinys> &, deque<mokinys> &, string);
};

bool compare(const mokinys &, const mokinys &);
void generateFiles();
