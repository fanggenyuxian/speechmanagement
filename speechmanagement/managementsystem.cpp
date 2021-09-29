#include<iostream>
using namespace std;
#include"speechmanager.h"

int main() {

	SpeechManager sm;

	int choice;

	while (true) { 

		sm.show_menu();

		cout << "ÇëÊäÈëÄãµÄÑ¡Ôñ£º" << endl;
		cin >> choice;

		switch (choice)
		{ 
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 0:
			sm.exit_system();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}