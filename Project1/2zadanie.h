using namespace std;
int abs() {
	int x;
	cout << "vvedite chislo dlya preobraz. v modul\n";
	if (!(cin >> x)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	int a;
		a = fabs(x);
	cout << a;
	return 0;
}

double safeDiv() {
	int x, y;
	cout << "vvedite 2 chisla chtobi poluchit x/y\n";
	if (!(cin >> x >> y)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	if (y != 0) {
		double c = double(x);
		double d = double(y);
		double a = c / d;
		cout << a;
		return 0;
	}
	else cout << 0;
		return 0;
}

bool is35() {
	int x;
	cout << "vvedite chislo dlya pproverki delenia na 3 ili na 5 no ne na 15\n";
	if (!(cin >> x) ) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	bool y;
	if (((x % 3 == 0) or (x % 5 == 0)) and x % 15 != 0) y = true;
	else y = false;
	cout << boolalpha << y;
	return 0;
}

string makeDecision() {
	int x, y;
	cout << "vvedite 2 chisla dlya sravneniya\n";
	if (!(cin >> x >> y)) {
		cerr << "oshbka vvoda" << endl;
		return 0;
	}
	if (x > y) { cout << x << ">" << y; }
	if (x < y) { cout << x << "<" << y; }
	if (x == y) { cout << x << "==" << y; }
	return 0;
}

int max3() {
	int x, y, z;
	std::cout << "vvedite 3 chisla dlya proverki\n";
	if (!(cin >> x >> y >> z)) {
		cerr << "oshbka vvoda" << endl;
		return 1;
	}
	int max = x; 
	if (y > max) {
		max = y; 
	}
	if (z > max) {
		max = z; 
	}
	cout << max;
	return 0;
}