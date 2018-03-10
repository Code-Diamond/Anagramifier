#include <iostream>
#include <array>
#include <string>

using namespace std;

//Number of characters in alphabet
const int NUMC = 26;

int calculateNumberOfCharacters(string, string);


int main()
{
	//Declare the two strings
	string first, second;
	//Retrieve input and assign to the string variables
	cout << "Enter first string." << endl << "String1: ";	cin >> first;
	cout << "\n";
	cout << "Enter second string." << endl << "String2: ";    cin >> second;
	cout << "\n";
	//Pass the arguments to the function to retrieve result
	int result = calculateNumberOfCharacters(first, second);

	cout << "You must remove " << result << " characters to make an anagram." << endl;

	system("pause");

	return 0;
}
//Accepts two string parameters and calculates the number of characters
	//needed to be omitted to form an anagram
int calculateNumberOfCharacters(string first, string second)
{
	int result = 0;

	//Declare two arrays to count character frequency
	int fArray[NUMC] = {0};
	int sArray[NUMC] = {0};

	// Time Complexity: O(n)

	//Count frequency of characters in first string
	for(int i = 0; first[i] != '\0'; i++ )
	{
		fArray[first[i] - 'a']++;
	}

	//Count frequency of characters in second string
	for(int i = 0; second[i] != '\0'; i++ )
	{
		sArray[second[i] - 'a']++;
	}

	//Count how many characters need to be removed
	for(int i = 0; i < NUMC; i++)
	{
		result += abs(fArray[i] - sArray[i]);
	}


	return result;
}
