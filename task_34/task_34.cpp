#include <iostream>
#include <fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	ifstream fin;
	fin.open("D:\\TEST2.txt");
	if (!fin.is_open()) {
		"Can't open the file!";
	}
	else {
		char ch;
			while (!(fin.eof())) {
				fin.get(ch);
					if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' ||
						ch == '7' || ch == '8' || ch == '9' || ch == '0') {
						cout << ch;
					}
					else {
						continue;
					}
			}
	}
	fin.close();
}