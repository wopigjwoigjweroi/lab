// COMSC-210 | Lab-14 | Jeremiah Ortiz
// Hello professor, Apologies but I haven't had the chance to setup the Github repositories as I have been busy all weekend, I hope to have it setup sometime this week. 

#include <iostream>

using namespace std; 

class Color {

private:

	int red;

	int blue; 

	int green; 

public: 

	void setRed(int r) {

		int red = r; 
		
	}

	void setBlue(int b) {

		int blue = b; 
	}

	void setGreen(int g) {

		int green = g; 
	}

	int getRed() {
		
		return red; 
	}

	int getBlue() {
		
		return blue; 
	}

	int getGreen() {

		return green; 
	}
	

	void printColor()  {

		cout << "Red: " << getRed() << endl << "Blue: " << getBlue() << endl << "Green: " << getGreen() << endl; 
	}
};

int main() {

	Color red, green, blue; 

	Color display; 

	red.setRed(0);
	blue.setBlue(0);
	green.setGreen(0);

	display.printColor(); 


	return 0;
}

