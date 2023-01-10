#include <iostream>

using namespace std;

int main() {
  string nama[5];
  int a, b, c, d, e;
  int status[10];
  int input[10];

  std::cout << "Banyak mahasiswa : ";
  cin >> c;
  std::cout << "Input nilai mahasiswa, dan status bayar.\n";
  cout << endl;

  for (int i = 0; i < c; i++) {
    cout << "nama: ";
    cin >> nama[i];
    cout << "Sudah bayar (0:Belum, 1:Sudah)?:";
    cin >> status[i];
    cout << "---" << endl;
  }
  cout << endl;

  cout << "Jika mahaiswa tersebut sudah bayar, maka dapat menginputkan nilai "
          "UTS, UAS, tgs1, tgs2\n";
  cout << endl;
  cout << "Munculkan mahasiswa yang belum bayar\n";
  cout << "------------------------------------\n";
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < c; j++) {
      if (status[i] == 0) {
        cout << j << "nama: " << nama[i] << endl;
      }
    }
  }
  cout << endl;
  cout << "Munculkan mahasiswa yang sudah bayar\n";
  cout << "------------------------------------\n";
  for (int i = 0; i < c; i++) {
    if (status[i] == 1) {
      cout << "nama: " << nama[i] << endl;
    }
  }
}
