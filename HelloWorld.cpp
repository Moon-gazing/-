#include <iostream>
#include <vector>
#include "add.h"
using namespace std;
class buliding {
	friend void func(buliding& b);
public:
	buliding(string bedroom) {
		this->bedroom = bedroom;
	}
private:
	string bedroom;
};
void func(buliding& b) {
	cout << b.bedroom << endl;
}
//int add(int a, int b);
class person {
public:
	//person operator+ (person& p2) {
	//	person temp;
	//	temp.m_a = this->m_a + p2.m_a;
	//	temp.m_b = this->m_b + p2.m_b;
	//	return temp;
	//}
	string operator+ (person& p2) {
		return "您相加的是person类型对象，无法相加";
	}
	person operator+ (int num) {
	person temp;
	temp.m_a = this->m_a + num;
	temp.m_b = this->m_b + num;
	return temp;
	}
	person() {

	}
	person(int a,int b) {
		this->m_a = a;
		this->m_b = b;
	}
	int m_a;
	int m_b;
};
void test01() {
	person p1(10,10);
	person p2(20, 20);
	string p3 = p1.operator+(p2);
	//string p3 = p1 + p2;
	cout << p3 << endl;
	//person p4 = p1 + 100;
	person p4 = p1.operator+(100);
	cout << p4.m_a << endl;
	cout << p4.m_b << endl;
	cout << 123;
}

int main() {
	test01();
	system("pause");
	return 0;
}

