using namespace std;
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
int findFirst () {
    int i = 0;
    int s = -1;
    int size, x;
    cout << "vvedite razmer massiva ";
    cin >> size;
    int* arr = new int[size];
    std::cout << "vvedite elementi massiva ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    cout << "vvedite chislo dlya poiska ";
    cin >> x;
    int index = i;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            s = i;
            if (s != -1) {
                cout << "pervoe chislo " << x << " nahoditsya na " << s << std::endl;
                delete [] arr;
                return 0;
             }
            ; 
            }
        }
    cout << s;
    delete [] arr;
    return 0; 
}

int findLast() {
    int i = 0;
    int s = -1;
    int size, x;
    cout << "vvedite razmer massiva ";
    cin >> size;
    int* arr = new int[size];
    cout << "vvedite elementi massiva ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "vvedite chislo dlya poiska ";
    cin >> x;
    int index = i;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            s = i;

            ; 
        }
    }
        if (s != -1) {
                cout << "poslednee chislo " << x << " nahoditsya na " << s << std::endl;
                delete[] arr;
                return 0;
            }
    cout << s;
    delete[] arr;
    return 0; 
}

int maxAbs() {
    int i = 0;
    int s = -1;
    int size, x;
    cout << "vvedite razmer massiva ";
    cin >> size;
    int* arr = new int[size];
    cout << "vvedite elementi massiva ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    int max = abs(arr[0]);
    int index = i;
    for (int i = 1; i < size; ++i) {
        if (abs(arr[i]) > max) {
            max = abs(arr[i]);
            x = arr[i];
        }
 
    }
    if (max == abs(arr[0])) x = arr[0];
    cout << "maksimalnoe chislo  -> " << x << endl;
    delete[] arr;
    return 0; 
}

