#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Test {
	int x;
public:
	int y;
	Test() {
		x = 0;
		y = 0;
	}

};

class Engine {
private:
	class InnerClass {
	private: 
		int x;
	public:
		int y;
	};
	double crankshaftSpeed; 
	int rpm;
	int temp;
	const int NormalTemp = 90;

	void setIdling() {
		rpm = 1000;
		crankshaftSpeed = rpm / 1000;
	}

	void engineOperation() {
		while (temp < NormalTemp) {
			temp++;
			cout << "Temperature: " << temp << endl;
			Sleep(100);
		}
		cout << "The engine is warm" << endl;
		setIdling();
	}
public:

	Engine() {
		rpm = 0;
		crankshaftSpeed = 0;
		temp = 0;
	}

	void Start() {
		cout << "------------Engine started!-----------" << endl;
		crankshaftSpeed = 2.0;
		rpm = 2000;
		temp = 30;
		engineOperation();
	}
	
	static int stat;
};

template <typename T>
class List {
public:
	T data;
	List* prev;
	List* next;
	
	List() {
		data = prev = next = nullptr;
	}
	List(T _data, List* _prev, List* _next) {
		data = _data;
		prev = _prev;
		next = _next; 
	}
};

class Human {
protected:
	string name;
	int age;
	int id;
	string hobby;
public:
	List<Human> humanList;
	static int count;
	Human(string name, int age) {
		this->name = name;
		this->age = age;
		count++;
		id = count;
		humanList.data = *this; 
	}
	Human(string name, int age, string hobby) {
		this->name = name;
		this->age = age;
		this->hobby = hobby;
		count++;
		id = count;
	}

	int GetId() {
		return id;
	}
};
int static count = 0;

int main()
{
	Test test;
	Engine jz;
	/*jz.Start();*/

	Human person1("Vasya", 13);
	Human person2("Petya", 21);

	return 0;
	system("pause");
}
