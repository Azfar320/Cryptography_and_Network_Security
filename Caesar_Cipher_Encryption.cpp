// A C++ program to illustrate Caesar Cipher Encryption Technique
#include <iostream>
using namespace std;

// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
	string result = "";

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i]+s-65)%26 +65); //ASCII Value For 'A' = 65

        // Encrypt Lowercase letters
        else
            result += char(int(text[i]+s-97)%26 +97); //ASCII Value For 'a' = 97
	}

	// Return the resulting string
	return result;
}

// Driver program to test the above function
int main()
{
	//string text="ATTACKATONCE";
	//int s = 4;
	string text;
	int s;
	cout<<"Enter a text: \n";
	cin>>text;
    cout<<"Enter Shift integer value: \n";
    cin>>s;

	cout << "Text : " << text;
	cout << "\nShift: " << s;
	cout << "\nCipher: " << encrypt(text, s);
	return 0;
}
