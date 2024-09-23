// Libraries + Headers
#pragma once
#include<iostream>
#include<string>
using namespace std;

// Functions
int strcmp_case_insensitive(string ob1, string ob2) {
	// Converting both strings to lowercase
	for (int i = 0; i < ob1.length(); i++) {
		ob1[i] = tolower(ob1[i]);
	}
	for (int i = 0; i < ob2.length(); i++) {
		ob2[i] = tolower(ob2[i]);
	}
	// Determine which string to dictate length then compare
	if (ob1.length() > ob2.length()) { // Object 1 bigger
		for (int i = 0; i < ob1.length(); i++) {
			if (ob1[i] > ob2[i]) { // Return comparison
				return 1;
			}
			else if (ob1[i] < ob2[i]) {
				return -1;
			}
		}
	}
	else {
		for (int i = 0; i < ob2.length(); i++) { // Object 2 bigger / equal
			if (ob1[i] > ob2[i]) { // Return comparison
				return 1;
			}
			else if (ob1[i] < ob2[i]) {
				return -1;
			}
		}
	}
	return 0;
}

int strcmp(string obj1, string obj2) {
	// Convert strings to char for C function strcmp
	const int length1 = obj1.length();
	const int length2 = obj2.length();
	char* ObjOne = new char[length1 + 1];
	char* ObjTwo = new char[length2 + 1];
	for (int i = 0; i < obj1.length(); i++) {
		ObjOne[i] = obj1[i];
	}
	for (int i = 0; i < obj2.length(); i++) {
		ObjTwo[i] = obj2[i];
	}
	// Comparison with strcmp
	int comparison = strcmp(ObjOne, ObjTwo);
	return comparison;
}