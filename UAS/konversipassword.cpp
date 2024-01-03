/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

// Function to save a nick and password to a file
void savePassword(const string &nick, const string &password) {
  ofstream file("passwords.txt", ios::app);
  if (file.is_open()) {
    file << "Nick: " << nick << " Password: " << password << endl;
    file.close();
    cout << "Password saved successfully.\n";
  } else {
    cerr << "Error: Unable to open the file for saving the password.\n";
  }
}

int main() {
  string nick, password;

  cout << "***********************************************" << endl;
  cout << "        Welcome to the Registration    " << endl;
  cout << "***********************************************" << endl;

  cout << "Enter Username: ";
  cin >> nick;

  bool validPassword = false;
  while (!validPassword) {
    cout << "Enter a password (at least 8 characters): ";
    cin >> password;

    if (password.length() <= 8) {
      validPassword = true;
    } else {
      cout << "Password must be at least 8 characters. Try again.\n";
    }
  }
  

  // Save the nick and password to a file
  savePassword(nick, password);

  cout << "***********************************************" << endl;
  cout << "       Registration Completed Successfully      " << endl;
  cout << "***********************************************" << endl;

  return 0;
}