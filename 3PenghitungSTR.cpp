#include <iostream>
using namespace std;

int main() {
  string str;
  int count = 0;

  cout << "Ketikan string yang ingin dihitung: ";
  getline(cin, str);

  for (int i = 0; str[i] != '\0'; i++) {
    count++;
  }

  cout << "Jumlah karakter dalam string adalah " << count << endl;

  return 0;
}

