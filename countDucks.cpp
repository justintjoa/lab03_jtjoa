// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
	if (argc!=2) {
    	// if argc is not 2, print an error message and exit
    		cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    		exit(1); // defined in cstdlib
  	}

	ifstream in;
	in.open(argv[1]);
	string line = "";
	
	if (in.fail()) {
		cout << "Opening file failed" << endl;
		return 0;
	}
	int Count = 0;
	int Pol = 0;
	while (!in.eof()) {
		getline(in, line);
			if (line == "duck") {
				Count = Count + 1;
			}		
			if (line == "goose") {
				Pol = Pol + 1;
			}
	}

	if (line == "duck") {
		Count = Count + 1;
	}		
	



	cout << "There were " << Count;
			if (Count == 1) {
				cout << " duck";
			}
			else {
				cout << " ducks ";
			}
 		cout << "in " << argv[1] << endl;
			

	 return 0;
}
