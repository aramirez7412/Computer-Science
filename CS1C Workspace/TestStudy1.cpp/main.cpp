#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
		string::size_type positionInString;
		string firstString = "The rain in Spain";
		string secondString;
		cout << "test" << endl;

		cout << firstString.length() << endl;
		cout << firstString.size() << endl;

		positionInString = firstString.find("rain");  // returns position with string
		cout << positionInString << endl ;

		positionInString = firstString.find("falls");  // returns position with string
	 	if (positionInString == string::npos)
	 			cout << "String not found" << endl ;
	 	else
	 			cout << positionInString << endl ;

		secondString = firstString.substr(4,5);  // (starting, number of characters;
		cout << secondString << endl ;

		secondString = firstString.substr(4,66); // (starting, number of characters;
		cout << secondString << endl ;
}
