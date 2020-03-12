#include "CSVreader.h"
#include <fstream>

#include <stdint.h>
#include <unistd.h>
#include <stdlib.h>

CSVreader::CSVreader(string filename){
  _filename = filename;
}

CSVreader::~CSVreader(){

}

void CSVreader::readCSV(){
  
  vector<int> temp;
  ifstream myfile(_filename);
  if(myfile.is_open()){
  
    while(getline(myfile,line)){
      
      //replace commas with spaces
      for(int i = 0; i < line.size(); i++) {
        if(line[i]==','){
          line[i] = ' ';
        }
      }
    
      //convert row from string to numeric values
      char * pEnd;
      const char * start = line.c_str();

      for(int i=0;i<220;i++){
        valuearray[i] = strtol (start, &pEnd, 10);
        start = pEnd;
        temp.push_back(valuearray[i]);
        
      }
      
      //add row vector to main vector
      vectorarray.push_back(temp);
      temp.clear();
      
    }  
    
  }
  else{
    cout << "Unable to open file: " << _filename << endl;
  }
  myfile.close();
   
}

void CSVreader::printVectorArray(){

  for(int i=0; i<vectorarray.size(); i++){
    for(int j=0; j<vectorarray[i].size(); j++){
      cout << vectorarray[i][j] << " ";
    }
    cout << endl;
  }

}

vector<vector<int>> * CSVreader::getVectorArray(){
}  

const long int * CSVreader::getValueArray(){

}

