#include <iostream>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>
#include <fstream>
#include <vector>

#include "CSVreader.h"

using namespace std;

int main(){
	
	string line;
	ifstream myfile ("movement1.csv");
	long int li[220];
	//convert to a vector..
	vector<vector<int>> myvector;
	vector<int> temp;
	
	if (myfile.is_open())
	{
	
		while ( getline (myfile,line) )
		{
		
		        //need to put this string line and parse it into its numbers into a vector...
		        char * pEnd;
		        
		        for(int i = 0; i < line.size(); i++) {
			        if(line[i]==','){
				        line[i] = ' ';
			        }
		        }
		        
		        const char * start = line.c_str();
		        
		        for(int i=0;i<220;i++){
			        li[i] = strtol (start, &pEnd, 10);
			        start = pEnd;
			        temp.push_back(li[i]);
			        
		        }
		        
		        myvector.push_back(temp);
		        temp.clear();
		     
	
		}
		
		
		myfile.close();
		
		for(int i=0; i<myvector.size();i++){
		        for(int k=0; k<myvector[i].size();k++){
		                cout << myvector[i][k] << " " ;
		        }
		        
		        cout << endl << endl;
		
		}
		
	}

	else cout << "Unable to open file"; 
	

	return 0;
	


}
