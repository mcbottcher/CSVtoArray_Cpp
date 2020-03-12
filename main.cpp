#include <iostream>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

#include "CSVreader.h"

using namespace std;

int main(){

  CSVreader move1_data("movement1.csv");
  CSVreader move2_data("movement2.csv");
  
  move1_data.readCSV();
  move2_data.readCSV();
  
  move1_data.printVectorArray();
  move2_data.printVectorArray();


	return 0;

}
