#include <string>
#include<iostream>
using namespace std;
void show_menu();
void show_title_given_year(int year);
void show_age_given_index(int index);
int index;
int year;
int main() {
	char input;
	cout << "Ignore the man behind that curtain!" << endl;
	while (1){
		cout << "Request: ";
		cin >> input;
		if (input == 'h') {
			show_menu();
		}
		else if (input == 'i') {
			cout << "What index? ";
			cin >> index;
			show_age_given_index(index);
		}
		else if (input == 'y') {
			cout << "What year? ";
			cin >> year;
			show_title_given_year(year);
		}
		else if (input == 'q')
			return 0;
		else
			cout << "Invalid request '" << input << "'; 'h' for help." << endl;
	}

}

void show_menu() {
	cout << "h-help" << endl;
	cout << "i-show age of the oz book for that index" << endl;
	cout << "q-quit" << endl;
	cout << "y-show the oz book for that year" << endl;

}

void show_age_given_index(int index) {
	int book_index[14] = {117, 113, 110, 109, 108, 107, 104, 103, 102, 101, 100, 99, 98, 97};
	cout << "Published " << book_index[index - 1] << " years ago." << endl;
}

void show_title_given_year(int year) {
	switch (year) {
	case 1900: {
		cout << "In 1900: The Wonderful Wizard of Oz" << endl;
		break;
	}
	case 1904: {
		cout << "In 1904: The Marvelous Land of Oz" << endl;
		break;
	}
	case 1907: {
		cout << "In 1907: Ozma of Oz" << endl;
		break;
	}
	case 1908: {
		cout << "In 1908: Dorothy and the Wizard in Oz" << endl;
		break;
	}
	case 1909: {
		cout << "In 1909: The Road to Oz" << endl;
		break;
	}
	case 1910: {
		cout << "In 1910: The Emerald City of Oz" << endl;
		break;
	}
	case 1913: {
		cout << "In 1913: The Patchwork Girl of  Oz" << endl;
			break;
	}
	case 1914: {
		cout << "In 1914: Tik-Tok of Oz" << endl;
		break;
	}
	case 1915: {
		cout << "In 1915: The Scarecrow of Oz" << endl;
		break;
	}
	case 1916: {
		cout << "In 1916: Rinkitink in Oz" << endl;
		break;
	}
	case 1917: {
		cout << "In 1917: The Lost Princess of Oz" << endl;
		break;
	}
	case 1918: {
		cout << "In 1918: The Tin Woodman of Oz" << endl;
		break;
	}
	case 1919: {
		cout << "In 1919: The Magic of Oz" << endl;
		break;
	}
	case 1920: {
		cout << "In 1920: Glinda of Oz" << endl;
		break;
	}
	default: {
		cout << "sorry,we can't seem to find the book you wish to find" << endl;
	}
	}
}