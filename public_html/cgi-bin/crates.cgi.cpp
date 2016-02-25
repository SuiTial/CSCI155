#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()

{

	// here is the datastring length=1&width=2&height=3

	string str = "";

	cin >> str;

	  cout << "Content-type: text/html" << endl << endl;

    cout << "<html><head><title>customer order</title></head><body>" << endl;
	
  cout << "Data received: "  << str << endl << "<br>";
	
	return 0;
}