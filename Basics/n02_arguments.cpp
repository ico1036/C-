#include <iostream>
using namespace std;


int main(int argc, char **argv){


	bool isMC;
	bool isSig = false;

	std::string action(argv[1]);
	if (action == "mc"){
		isMC = true;
		
	}else if ( action == "data"){
		isMC = false;
	}else if ( action == "signal"){
		isMC = true;
		isSig = true;
	}else{
		
		cout << "Invalide input data types: mc or data" << endl;
	}

	cout << "isMC: " <<isMC << "isSig: "<< isSig  << endl;

}
