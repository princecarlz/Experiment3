#include <iostream>
#include <conio.h>


using namespace std;

const int prov = 3;
const int week = 7;
char p;

int main()
{
    int temp[prov][week];

    cout << "Enter weekly temperature for Province A, Province B, Province C. \n";

  
    for (int i = 0; i < prov; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
			if (i==0) p = 'A';
			else if (i == 1) p = 'B';
			else p = 'C';
            cout << "Province " << p << ", Day " << j + 1 << " : ";
            cin >> temp[i][j];
        }
    }

    cout << "\n\nDisplaying Values:\n";

   
    for (int i = 0; i < prov; ++i)
    {
        for(int j = 0; j < week; ++j)
        {
        	if (i==0) p = 'A';
			else if (i == 1) p = 'B';
			else p = 'C';
            
            cout << "Province " << p << ", Day " << j + 1 << " = " << temp[i][j] << endl;
        }
    }

	system ("pause");
    return 0;
}
