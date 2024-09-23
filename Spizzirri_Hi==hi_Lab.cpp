/*
Nick Spizzirri
9/20/24
CSC122
Hi==hi Lab
*/

// Libraries + Headers
#include<iostream>
#include<string>
#include"Strcmp.h"
using namespace std;

// Main Space
int main() {
	// Creation of strings for comparison
	string object1;
	string object2;
	cout << "Please enter two strings to compare:..." << endl;
	cout << "\nString One: ";
	cin >> object1;
	cout << "\nString Two: ";
	cin >> object2;
	// Case insens comparison
	int strcmpCI_result = strcmp_case_insensitive(object1, object2);
	cout << "\n\nThe case-insensitive comparison of " << object1 << " and " << object2 << " returns: " << strcmpCI_result << "." << endl;
	// Case sens comparison
	int strcmp_result = strcmp(object1, object2);
	cout << "\nThe case-sensitive comparison of " << object1 << " and " << object2 << " returns: " << strcmp_result << "." << endl;
	return 0;
}