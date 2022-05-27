#include <iostream>
#include <iomanip>
#include "Court.h"
using namespace std;

Court::Court()
{

}

void intro()
{
	cout << "Choose option:" << endl << endl;
	cout << "1. Add item" << endl;
	cout << "2. Display item" << endl;
	cout << "3. Sort items" << endl;
	cout << "4. Search items" << endl;
	cout << "5. //extra function" << endl;
	cout << "6. Exit" << endl;
}