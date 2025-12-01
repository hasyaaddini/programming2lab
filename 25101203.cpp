#include <iostream>
#include <cstdlib>
using namespace std;
class HotDogStand {
public:
	HotDogStand();
	HotDogStand(int newID, int newNumSold);
	int GetID();
	void SetID(int newID);
	void JustSold();
	int GetNumSold();
	static int GetTotalSold();

private:
	static int TotalSold;
	int numSold;
	int ID;
};

int HotDogStand::TotalSold = 0;

HotDogStand::HotDogStand() {
	numSold = 0;
	ID = 0;
}

HotDogStand::HotDogStand(int newID, int newNumSold) {
	numSold = newNumSold;
	ID = newID;
	TotalSold += newNumSold;
}

void HotDogStand::SetID(int newID) {
	ID = newID;
}

void HotDogStand::JustSold() {
	numSold++;
	TotalSold++;
}

int HotDogStand::GetNumSold() {
	return numSold;
}

int HotDogStand::GetTotalSold() {
	return TotalSold;
}

int HotDogStand::GetID() {
	return ID;
}

int main() {
	HotDogStand s1(251, 1), s2(12, 12), s3(65, 5);

	s1.JustSold();
	s2.JustSold();
	s1.JustSold();

	cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
	cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
	cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
	cout << "Total sold = " << s1.GetTotalSold() << endl;
	cout << endl;

	s3.JustSold();
	s1.JustSold();

	cout << "Stand " << s1.GetID() << " sold " << s1.GetNumSold() << endl;
	cout << "Stand " << s2.GetID() << " sold " << s2.GetNumSold() << endl;
	cout << "Stand " << s3.GetID() << " sold " << s3.GetNumSold() << endl;
	cout << "Total sold = " << s1.GetTotalSold() << endl;
	cout << endl;
	return 0;


}