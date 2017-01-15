// asd.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
void swap(int &x, int &y);

 int main()
 {
	     int x = 5, y = 10;

       cout << "Main. Before swap, x: " << x << " y: " << y << "\n";// 5  i 10
	     swap(x, y); //5 i 10; 10 i 5
	    cout << "Main. After swap, x: " << x << " y: " << y << "\n"; //5 i 10

system("pause");
}

 void swap(int &x, int &y)
 {
	     int temp;

	 cout << "Swap. Before swap, x: " << x << " y: " << y << "\n"; // 5 i 10
	
         temp = x;
 	     x = y;
	     y = temp;
 cout << "Swap. After swap, x: " << x << " y: " << y << "\n"; //10 i 5
		}

