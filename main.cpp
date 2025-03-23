#include <iostream>
using namespace std;


int arr[20];
int n;

void Input()
{
    while (true) {
        cout << "Masukkan Jumlah Data pada Arrah : ";
        cin >> n;

        if (n <= 20) {
            break;
        } else {
            cout << "\nArray yang anda masukkan masimal 20 elemen.\n";
        }
    }
}

int main()
{
    
}