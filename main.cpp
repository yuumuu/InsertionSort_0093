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
    
    cout << endl;
    cout << "=========================" << endl;
    cout << "Masukkan elemen Array : " << endl;
    cout << "=========================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << " : ";
        cin >> arr[i];
    }
}

void InsertionSort()
{
    int temp;
    int j, i;

    for (i = 1; i <= n - 1; i++)
    {
        temp = arr[i];

        j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }
}

int main()
{
    
}