#include <iostream>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <fstream>

#include "CSVreader.h"

using namespace std;

int main(){
	
	string line;
	ifstream myfile ("movement1.csv");
	if (myfile.is_open())
	{
		while ( getline (myfile,line) )
		{
		
		//need to put this string line and parse it into its numbers into a vector...
		char * pEnd;
		long int li[220];
		
		for(int i = 0; i < line.size(); i++) {
			if(line[i]==','){
				line[i] = ' ';
			}
		}
		
		
		const char * start = line.c_str();
		
		for(int i=0;i<220;i++){
			li[i] = strtol (start, &pEnd, 10);
			start = pEnd;
			
		}
		
		//we have each in a long int array
		//need to convert to vector of vector
		
	  	
		}
		myfile.close();
	}

	else cout << "Unable to open file"; 

	return 0;
	


}
