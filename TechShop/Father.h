#ifndef _FATHER_H_
#define _FATHER_H_
#include "Source.h"

class Father
{
protected:
	string name;
	string type;
	long int price;

public:
	Father() = default;
	Father(string name, string type, long int price) { this->name = name; this->price = price; this->type = type; }
	Father(const Father& F) { this->name = F.name; this->price = F.price; }

	virtual void print() { cout << "Name:\t" << name << endl << "Type:\t" << type << endl << "Price:\t" << price << endl; }

	friend ostream& operator<<(ostream&os, Father &f);
	friend istream& operator>>(istream&is, Father &f);

	string GetName() { return name; }
	string GetType() { return type; }
	long int GetPrice() { return price; }

	void SetName(string name) { this->name = name; }
	void SetType(string type) { this->type = type; }
	void SetPrice(long int price) { this->price = price; }
};
ostream& operator<<(ostream&os, Father &f)
{
	os << "Name:\t" << f.name << endl << "Type:\t" << f.type << endl << "Price:\t" << f.price;
	return os;
}
istream& operator>>(istream&is, Father &f)
{
	is >> f.name >> f.price;
	return is;
}
#endif // !_FATHER_H_