#include <iostream>
using namespace std;
int main()
{
	int menu = 1;
	switch (menu)
	{
	case 1:
		cout << "To jest wpis nr 1" << endl;
	case 2:
		cout << "To jest wpis nr 2" << endl;
		break;
	case 3:
		cout << "To jest wpis nr 2" << endl;
		break;
	default:
		cout << "To jest wpis domyślny" << endl;
		break;
	}
	return 0;

}

