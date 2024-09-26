using namespace std;
#include <sstream>
#include <string>
string listNums() {
    int x;
    std::cout << "vvedite chislo ";
    std::cin >> x;
    ostringstream oss; 

    for (int i = 0; i <= x; ++i) {
        oss << i << " ";
        
    }
    return oss.str();
}

string reverseListNums() {
    int x;
    std::cout << "vvedite chislo ";
    std::cin >> x;
    ostringstream oss;

    for (int i = x; i >= 0; --i) {
        oss << i << " ";
    }
    return oss.str();
}

string chet() {
    int x;
    std::cout << "vvedite chislo ";
    std::cin >> x;
    ostringstream oss;

    for (int i = 0; i <= x; i = i + 2) {
        oss << i << " ";  
    }
    return oss.str();
}

int pow() {
    int x, y;
    cout << "vvedite 2 chsisla dlya stepeni \n";
    if (!(cin >> x >> y)) {
        cerr << "oshbka vvoda" << endl;
        return 1;
    }
    int u = x;
    for (int i = 1; i < y; ++i) {
        u = u * x;
    }
    cout << u;
    return 0;
}

int numLen() {
    long x;
    cout << "vvedite chislo dlya podsheta chifr v nem\n";
    cin >> x;
    int a = 1;
    while (x / 10 != 0) {
        x = x / 10;
        a = a + 1;
    }
    cout << a;
    return 0;
}