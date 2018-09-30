#include <iostream>
#include <fstream>
#include "polygon.h"
//#include "crtdynmem.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	polygon t1;
	/*ofstream Data_file;
	Data_file.open("Polygon.txt");
	cin >> t1;
	Data_file << t1;
	Data_file.close(); */ 
	ifstream Data_file("Polygon.txt");
	int i = 0;
	Data_file >> t1;
	cout << t1.S()<<endl;

	system("pause");
 	return 0;
}