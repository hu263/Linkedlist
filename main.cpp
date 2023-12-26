
#include "linkedlist.h"
#include "linkedlist.cpp"
#include "rainfall.h"

#include <iostream>
using namespace std;

class Rainfall;

int main() {
  LinkedList<Rainfall> list;
  Rainfall rain1, rain2(4,5,6);
  rain1.setAvgRainfall(2);
  rain1.setMaxRainfall(3);
  rain1.setMinRainfall(1);

  list.Append(rain1);
  list.Append(rain2);
  // cout << list.IsEmpty() << endl;
  list.First().print(); 
  list.Last().print(); 

  // out << "Hello World!\n";
  return 0;
} 