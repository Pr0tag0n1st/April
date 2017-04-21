#include <iostream>
using namespace std;
#include <ctime>
#include<cstdlib>
void ColorShuffle();
int main() {
	srand(unsigned int(time(NULL)));
	while (1) {
		ColorShuffle();
		system("Pause");
	}
}
void ColorShuffle() {
	int chance = rand() % 100 + 1;
	if (chance <= 25) {
		system("Color 1F");
		cout << "Blue" << endl;
	}
	else if (chance > 25 && chance <= 50) {
		system("Color 2F");
		cout << "Green" << endl;
	}
	else {
		system("Color 4F");
		cout << "Red" << endl;
	}
}