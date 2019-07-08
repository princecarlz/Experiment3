#include <iostream>
#include <conio.h>
#include <string> 
#include <cstring>

using namespace std;

int main()
{

 char str[50], temp;
	
    int i, j, cnt=0;

    cout << "Enter an array : ";
    gets(str);
    
 j = strlen(str) - 1;

    for (i = 0; i < j; i++,j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;	
	}
	cout << "\nReversed array: " << str << endl << endl; 


	for (int i = 0; str [i]; i++)
	{
		cnt++; 
	}

	cout << "Size of Array: " << cnt << endl; 

system("pause");
return 0;
}
