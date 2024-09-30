// COMSC-210 | Lab 15 | Jeremiah Ortiz
// Hello professor, Apologies but I haven't had the chance to setup the Github repositories as I have been busy all weekend, I hope to have it setup sometime this week. 

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std; 

class Movie {

private:

	string title;

	string screenWriter;

	int releaseYear;

public:

	void setTitle(const string& t) {

		title = t;
	}

	void setreleaseYear(int r) {

		releaseYear = r;
	}

	void setscreenWriter(const string& s) {

		screenWriter = s; 
	}

	string getTitle() {
		return title; 
	}

	int getreleaseYear() {
		return releaseYear; 
	}

	string getscreenWriter() {
		return screenWriter; 
	}

	void print() {
		cout << "Movie: " << title << endl << " Year Released: " << releaseYear << endl << " Screen Writer: " << endl; 
	}

};

const int COUNT = 4; 

int main() {

	Movie movieArray[COUNT]; 

	fstream inputFile("Best Movie of 2019.txt"); 

	string title; 
	
	string screenWriter; 

	int releaseYear; 

	for (int i = 0; i < COUNT; ++i) {

		getline(inputFile, title); 

		inputFile >> releaseYear;

		inputFile.ignore(); 

		getline(inputFile, screenWriter); 


		movieArray[i].setTitle(title); 

		movieArray[i].setreleaseYear(releaseYear);

		movieArray[i].setscreenWriter(screenWriter); 
	}

	for (int i = 0; i < COUNT; ++i) {
		movieArray[i].print();

		cout << endl;
	}

	return 0; 
}