// A C++ program to illustrate Caesar Cipher Decryption Technique
#include <iostream>
using namespace std;

string decrypt(string text, int s)
{
	string result = "";

	// traverse text
	for (int i=0;i<text.length();i++)
	{
		// apply transformation to each character
		// Encrypt Uppercase letters
		if (isupper(text[i]))
			result += char(int(text[i]-s-65+26)%26 +65); //ASCII Value For 'A' = 65

        // Encrypt Lowercase letters
        else
            result += char(int(text[i]-s-97+26)%26 +97); //ASCII Value For 'a' = 65
	}

	// Return the resulting string
	return result;
}

int main()
{
	//string text="ATTACKATONCE";
	//int s = 4;
	string text;
	int s;
	cout<<"Enter a encrypted text: \n";
	cin>>text;
    cout<<"Enter Shift integer value: \n";
    cin>>s;

	cout << "Encrypted Text : " << text;
	cout << "\nShift: " << s;
	cout << "\nDecrypted Text: " << decrypt(text, s);
	return 0;
}
