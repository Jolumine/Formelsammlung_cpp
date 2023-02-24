#include <iostream>

#include "src/math/Analytics.h"
#include "src/math/Geometry.h"
#include "src/math/Stochastic.h"

using namespace std; 

void possibilites(){
	cout << "\n[#] Mathematics:" << endl; 
	cout << "\t[1] Analysis" << endl; 
	cout << "\t[2] Geometry" << endl; 
	cout << "\t[3] Stochastic" << endl; 
}

void help(){
	cout << "\n[.] Formula Collection in pre-release [.]" << endl; 
	cout << "Commands:" << endl; 
	cout << "\tmenu: prints the possibilites for formulas" << endl; 
	cout << "\texit: quits the programm\n" << endl; 
}

int main(){
	cout << "Formula Collection" << endl;
	string command; 

	while(true){
		cout << "[?]:"; cin >> command; 
		if(command == "menu"){
			possibilites(); 
		}
		else if(command == "help"){
			help(); 
		}
		else if(command == "exit"){
			cout << "Exit..."; break; 
		}
		else{
			if(command == "1"){
				
			}
			else if(command == "2"){

			}
			else if(command == "3"){

			}
		}
	}
	
	return 0;
}