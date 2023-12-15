#include <bits/stdc++.h>
#ifdef _MSC_VER
#define MY_FUNCTION __FUNCSIG__
#else
#define MY_FUNCTION __FUNCSIG__
#endif
using namespace std;
/*
* exercise-08.cpp
* 
* by jekim
* 2023-12-15
*/


class MyApplication {
public:
	// default constructor
	MyApplication() { cout << MY_FUNCTION << '\n'; }
	// copy constructor
	MyApplication(const MyApplication& r) { cout << MY_FUNCTION << '\n'; }
	// move constructor
	/*
		if there is no "noexcept"  -> emplace_back() uses copy constructor.
	*/
	MyApplication(MyApplication&& other) noexcept { cout << MY_FUNCTION << '\n'; }
	// copy assignment operator
	MyApplication& operator=(const MyApplication& other)  {
		cout << MY_FUNCTION << '\n';
		return *this;
	}
	// move assignment operator
	MyApplication& operator=(MyApplication&& other) noexcept {
		cout << MY_FUNCTION << '\n';
		return *this;
	}
	//destructor
	~MyApplication() { cout << MY_FUNCTION << '\n'; }
};

int main() {

	/*MyApplication a;

	MyApplication b = a;*/

	//MyApplication c = std::move(a);

	//MyApplication d;
	//d = std::move(c);

	vector<MyApplication> v;

	for (int i = 0; i < 10; i++) {
		v.emplace_back(); // move constructor
	}


	return 0;
}