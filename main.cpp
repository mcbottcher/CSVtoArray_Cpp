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
  
  vector<vector<int>> myarray= move1_data.getVectorArray();

  for(int i=0; i<myarray.size(); i++){
    for(int j=0; j<myarray[i].size(); j++){
      cout << myarray[i][j] << " ";
    }
  cout << endl << endl; 
  }
	return 0;

}
