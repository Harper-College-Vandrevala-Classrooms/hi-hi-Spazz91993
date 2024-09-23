/*
Nick Spizzirri
9/20/24
CSC122
Hi==hi Lab Test
*/

// Libraries + Headers
#include<iostream>
#include<string>
#include<cassert>
#include"Strcmp.h"
using namespace std;

// Main Space
int main() {
	// Series of asserts to test various inputs
	assert(strcmp_case_insensitive("A", "a") == 0);
	assert(strcmp("A", "a") == -1);
	assert(strcmp_case_insensitive("B", "a") == 1);
	assert(strcmp("B", "a") == -1);
	assert(strcmp_case_insensitive("A", "b") == -1);
	assert(strcmp("A", "b") == -1);
	return 0;
}