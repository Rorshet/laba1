using namespace std;
double double_fraction()
{
	double x;
	std::cout << "vvedite ne cheloe chislo: ";
	if (!(cin >> x)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	int c = int(x);
	std::cout << x - c;
	return 0;
}

int sumLastNums()
{
	int x;
	std::cout << "vvedite chislo: ";
	if (!(cin >> x)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	int c = x % 10;
	int v = x / 10 % 10;
	std::cout << c + v;
	return 0;
}

int charToNum()
{
	char x;
	std::cout << "vvedite chsislo dlaya preobrazovaniya (0-9) \n";
	if (!(cin >> x) or x > 10 or x < 0) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	int c = int(x);
	std::cout << c;
	return 0;
}

bool isPositive() {
	int x;
	std::cout << "vvedite chislo\n";
	if (!(cin >> x)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	bool a;
	if (x > 0) {
		a = true;
	}
	else a = false;
	std::cout << std::boolalpha << a;
	return 0;
}

bool is2Digits() {
	int x;
	std::cout << "vvedite chislo\n";
	if (!(cin >> x)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	if (std::cin.fail()) {
		std::cout << "ne chislo";
	}
	else {
		bool a;
		if (x > 99 or x < 10) a = 0;
		else a = 1;
		std::cout << std::boolalpha << a;
		return 0;
	}
}
