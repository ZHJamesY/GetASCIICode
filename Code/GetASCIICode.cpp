#include <iostream>
#include <conio.h>

using namespace std;

int main() 
{
	int ASCII = 0;

	while(ASCII !=27)
	{
        // Assign read character to ASCII
		ASCII = getche();

        if(ASCII != 27)
        {
		    cout<<" ASCII code is "<<ASCII <<"\n";
        }
	}
	return 0;
}
