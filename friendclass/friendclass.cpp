#include <iostream>
using namespace std;

class mmahasiwa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};   

class siswa {
private:
	int id;
public:
	void setId(int pId);
	void displayAll(orang& a);
};


void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}

void siswa::setId(int pId) {
	id = pId;
}