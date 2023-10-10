#include <iostream>
#include <math.h>
//Wyrażenia warunkowe
using namespace std;
int main()
{/*
	int menu = 2;
	if (menu == 1) {
		cout << "Menu1 = " << menu << endl;
	}
	else if (menu == 2) {
		cout << "Menu2 = " << menu << endl;
	}
	else if (menu == 3) {
		cout << "Menu3 = " << menu << endl;
	}
	else  {
		cout << "Menu domyślne = " << menu << endl;
	}
	//----------------------------------------
	*/
	// warunek? prawda: fałsz;
	int menu = 6;
	menu == 1 ? (cout << "Menu1 = " << menu << endl) 
		: (menu == 2 ? (cout << "Menu2 =" << menu << endl) 
			: menu == 3 ? (cout << "Menu3 =" << menu << endl) 
			: cout << "Menu domyslne = " << menu << endl);



	return 0;
}
