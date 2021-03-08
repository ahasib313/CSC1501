#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {
	string message="Jrypbzr gb Avtug Inyr";
	string sentence;

	for (int i = 1; i <= 26; i++) {
		sentence = "";
		cout << i << ": ";
		for (size_t j = 0; j < message.size(); j++) {
			
			if (isupper(message[j]))
			{
				cout << char(int(message[j] + i - 65) % 26 + 65);
			}
			else if (islower(message[j]))
			{
				cout << char(int(message[j] + i - 97) % 26 + 97);
			}
			else if (message[j] == 32)
			{

				cout << " ";
			}
			else
			{
				sentence += message[j];
			}
		}
		cout << sentence << endl;
	}
}