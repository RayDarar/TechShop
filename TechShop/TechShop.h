#ifndef _TECHSHOP_H_
#define _TECHSHOP_H_
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include "Father.h"
#include "Source.h"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//---------------------------------------------------------------------------------[SCANER]---------------------------------------------------------------------------------------------------------------
class Scaner :public Father
{
private:
	string form;
	int resolution;

public:
	Scaner() :Father() { this->form = ""; this->resolution = 0; this->type = "Scaner"; }
	Scaner(string name, string form, int resolution, long int price) :Father(name, "Scaner", price) { this->form = form; this->resolution = resolution; this->type = "Scaner"; }
	Scaner(const Scaner& sc) { this->form = sc.form; this->name = sc.name; this->price = sc.price; this->resolution = sc.resolution; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Form/Resolution:\t" << form << '/' << resolution << endl << "Price:\t\t\t" << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, string form, int resolution, long int price) { this->name = name; this->price = price; this->form = form; this->resolution = resolution; this->type = "Scaner"; }

	friend ostream& operator<<(ostream&os, Scaner& sc);
	friend istream& operator >> (istream&is, Scaner& sc);

	string getForm() { return form; }
	int GetResolution() { return resolution; }

	void setForm(string form) { this->form = form; }
	void SetResolution(int resolution) { this->resolution = resolution; }
};
ostream& operator<<(ostream&os, Scaner &sc)
{
	os << "Name:\t\t\t" << sc.name << endl << "Form/Resolution:\t" << sc.form << '/' << sc.resolution << endl << "Price:\t\t\t" << sc.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Scaner& sc)
{
	is >> sc.name >> sc.form >> sc.resolution >> sc.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Laptop]--------------------------------------------------------------------------------------------------------------------------
class Laptop : public Father
{
private:
	short int width;
	short int height;
	int weight;
	string monitor;
	int battery;

public:
	Laptop() : Father() { this->battery = 0; this->height = 0; this->monitor = "0:0"; this->weight = 0; this->width = 0; this->type = "Laptop"; }
	Laptop(string name, short int width, short int height, int weight, string monitor, int battery, long int price) : Father(name, "Laptop", price) { this->battery = battery; this->height = height; this->monitor = monitor; this->weight = weight; this->width = width; this->type = "Laptop"; }
	Laptop(const Laptop &lp) { this->battery = lp.battery; this->height = lp.height; this->monitor = lp.monitor; this->name = lp.name; this->price = lp.price; this->weight = lp.weight; this->width = lp.width; }


	void print() { cout << "Name:\t\t\t" << this->name << endl << "Monitor:\t\t" << this->monitor << endl << "Width/Height:\t\t" << this->width << '/' << this->height << endl << "Weight/Battery:\t\t" << this->weight << '/' << this->battery << endl << "Price:\t\t\t" << this->price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, short int width, short int height, int weight, string monitor, int battery, long int price) { this->name = name; this->price = price; this->battery = battery; this->height = height; this->monitor = monitor; this->weight = weight; this->width = width; this->type = "Laptop"; }

	friend ostream& operator<<(ostream&os, Laptop& lp);
	friend istream& operator >> (istream&is, Laptop& lp);

	short int GetWidth() { return width; }
	short int GetHeight() { return height; }
	int GetWeight() { return weight; }
	string GetMonitor() { return monitor; }
	int GetBattery() { return battery; }

	void SetWidth(short int width) { this->width = width; }
	void SetHeight(short int height) { this->height = height; }
	void SetWeight(int weight) { this->weight = weight; }
	void SetMonitor(string monitor) { this->monitor = monitor; }
	void SetBattery(int battery) { this->battery = battery; }
};
ostream& operator<<(ostream&os, Laptop& lp)
{
	os << "Name:\t\t\t" << lp.name << endl << "Monitor:\t\t" << lp.monitor << endl << "Width/Height:\t\t" << lp.width << '/' << lp.height << endl << "Weight/Battery:\t\t" << lp.weight << '/' << lp.battery << endl << "Price:\t\t\t" << lp.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Laptop& lp)
{
	is >> lp.name >> lp.monitor >> lp.height >> lp.width >> lp.weight >> lp.battery >> lp.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Hardware]----------------------------------------------------------------------------------------------------------------------
class Hardware : public Father
{
private:
	int capacity;
	short int speed;
	short int c_size;

public:
	Hardware() : Father() { this->capacity = 0; this->speed = 0; this->c_size = 0; this->type = "Hardware"; }
	Hardware(string name, int capacity, short int speed, short int c_size, long int price) :Father(name, "Hardware", price) { this->capacity = capacity; this->c_size = c_size; this->speed = speed; this->type = "Hardware"; }
	Hardware(const Hardware & hd) { this->capacity = hd.capacity; this->c_size = hd.c_size; this->name = hd.name; this->price = hd.price; this->speed = hd.speed; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Capacity/Speed:\t\t" << capacity << '/' << speed << endl << "Cache size:\t\t" << c_size << endl << "Price:\t\t\t" << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, int capacity, short int speed, short int c_size, long int price) { this->name = name; this->price = price; this->capacity = capacity; this->c_size = c_size; this->speed = speed; this->type = "Hardware"; }

	friend ostream& operator<<(ostream&os, Hardware& hd);
	friend istream& operator >> (istream&is, Hardware& hd);

	int GetCapacity() { return capacity; }
	short int GetSpeed() { return speed; }
	short int GetC_size() { return c_size; }

	void SetCapacity(int capacity) { this->capacity = capacity; }
	void SetSpeed(short int speed) { this->speed = speed; }
	void SetC_size(short int c_size) { this->c_size = c_size; }
};
ostream& operator<<(ostream&os, Hardware& hd)
{
	os << "Name:\t\t\t" << hd.name << endl << "Capacity/Speed:\t\t" << hd.capacity << '/' << hd.speed << endl << "Cache size:\t\t" << hd.c_size << endl << "Price:\t\t\t" << hd.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Hardware& hd)
{
	is >> hd.name >> hd.capacity >> hd.speed >> hd.c_size >> hd.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[CPU]-----------------------------------------------------------------------------------------------------------------------
class CPU : public Father
{
private:
	double frequency;
	short int cache;
	string Socket;

public:
	CPU() : Father() { frequency = 0; cache = 0; Socket = " ";  type = "CPU"; }
	CPU(string name, double frequency, short int cache, string Socket, long int price) : Father(name, "CPU", price) { this->cache = cache; this->frequency = frequency; this->Socket = Socket; this->type = "CPU"; }
	CPU(const CPU &cp) { this->cache = cp.cache; this->frequency = cp.frequency; this->name = cp.name; this->price = cp.price; this->Socket = cp.Socket; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Frequency/Cache:\t" << frequency << '/' << cache << endl << "Socket/Price:\t\t" << Socket << '/' << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, double frequency, short int cache, string Socket, long int price) { this->name = name; this->price = price; this->cache = cache; this->frequency = frequency; this->Socket = Socket; this->type = "CPU"; }

	friend ostream& operator<<(ostream&os, CPU &cp);
	friend istream& operator >> (istream&is, CPU &cp);

	double GetFrequency() { return frequency; }
	short int GetCache() { return cache; }
	string GetSocket() { return Socket; }

	void SetFrequency(double frequency) { this->frequency = frequency; }
	void SetCache(short int cache) { this->cache = cache; }
	void SetSocket(string Socket) { this->Socket = Socket; }
};
ostream& operator<<(ostream&os, CPU &cp)
{
	os << "Name:\t\t\t" << cp.name << endl << "Frequency/Cache:\t" << cp.frequency << '/' << cp.cache << endl << "Socket/Price:\t\t" << cp.Socket << '/' << cp.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, CPU &cp)
{
	is >> cp.name >> cp.frequency >> cp.cache >> cp.Socket >> cp.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Video Card]-----------------------------------------------------------------------------------------------------------------------
class VideoCard : public Father
{
private:
	double frequency;
	short int capacity;
	string tire_type;

public:
	VideoCard() : Father() { this->capacity = 0; this->frequency = 0; this->tire_type = " "; this->type = "Video Card"; }
	VideoCard(string name, double frequency, short int capacity, string tire_type, long int price) : Father(name, "Video Card", price) { this->capacity = capacity; this->frequency = frequency; this->tire_type = tire_type; this->type = "Video Card"; }
	VideoCard(const VideoCard &vd) { this->capacity = vd.capacity; this->frequency = vd.frequency; this->name = vd.name; this->price = vd.price; this->tire_type = vd.tire_type; }

	void print() { cout << "Name:\t\t\t" << this->name << endl << "Frequency/Capacity:\t" << this->frequency << '/' << this->capacity << endl << "Tire type/Price:\t" << this->tire_type << '/' << this->price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, double frequency, short int capacity, string tire_type, long int price) { this->name = name; this->price = price; this->capacity = capacity; this->frequency = frequency; this->tire_type = tire_type; this->type = "Video Card"; }

	friend ostream& operator<<(ostream&os, VideoCard &vd);
	friend istream& operator >> (istream&is, VideoCard &vd);

	double GetFrequency() { return frequency; }
	short int GetCapacity() { return capacity; }
	string GetTire_type() { return tire_type; }

	void SetFrequency(double frequency) { this->frequency = frequency; }
	void SetCapacity(short int capacity) { this->capacity = capacity; }
	void SetTire_type(string tire_type) { this->tire_type = tire_type; }
};
ostream& operator<<(ostream&os, VideoCard &vd)
{
	os << "Name:\t\t\t" << vd.name << endl << "Frequency/Capacity:\t" << vd.frequency << '/' << vd.capacity << endl << "Tire type/Price:\t" << vd.tire_type << '/' << vd.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, VideoCard &vd)
{
	is >> vd.name >> vd.frequency >> vd.capacity >> vd.tire_type >> vd.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Motherboard]-----------------------------------------------------------------------------------------------------------------------
class Motherboard : Father
{
private:
	string chip;
	string tire;
	string form;

public:
	Motherboard() : Father() { this->chip = " "; this->form = " "; this->tire = " "; this->type = "Motherboard"; }
	Motherboard(string name, string chip, string tire, string form, long price) : Father(name, "Motherboard", price) { this->chip = chip; this->form = form; this->tire = tire; this->type = "Motherboard"; }
	Motherboard(const Motherboard &mb) { this->chip = mb.chip; this->form = mb.form; this->name = mb.name; this->price = mb.price; this->tire = mb.tire; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Chip/Tire:\t\t" << chip << '/' << tire << endl << "Form/Price:\t\t" << form << '/' << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, string chip, string tire, string form, long price) { this->name = name; this->price = price; this->chip = chip; this->form = form; this->tire = tire; this->type = "Motherboard"; }

	friend ostream& operator<<(ostream&os, Motherboard &mb);
	friend istream& operator >> (istream&is, Motherboard &mb);

	string GetChip() { return chip; }
	string GetTire() { return tire; }
	string getForm() { return form; }

	void SetChip(string chip) { this->chip = chip; }
	void SetTire(string tire) { this->tire = tire; }
	void setForm(string form) { this->form = form; }
};
ostream& operator<<(ostream&os, Motherboard &mb)
{
	os << "Name:\t\t\t" << mb.name << endl << "Chip/Tire:\t\t" << mb.chip << '/' << mb.tire << endl << "Form/Price:\t\t" << mb.form << '/' << mb.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Motherboard &mb)
{
	is >> mb.name >> mb.chip >> mb.tire >> mb.form >> mb.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Modem]-----------------------------------------------------------------------------------------------------------------------
class Modem : public Father
{
private:
	short int speed;

public:
	Modem() : Father() { this->speed = 0; this->type = "Modem"; }
	Modem(string name, short int speed, long int price) : Father(name, "Modem", price) { this->speed = speed; this->type = "Modem"; }
	Modem(const Modem &md) { this->name = md.name; this->price = md.price; this->speed = md.speed; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Speed/Price:\t\t" << speed << '/' << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, short int speed, long int price) { this->name = name; this->price = price; this->speed = speed; this->type = "Modem"; }

	friend ostream& operator<<(ostream&os, Modem& md);
	friend istream& operator >> (istream&is, Modem& md);

	short int GetSpeed() { return speed; }

	void SetSpeed(short int speed) { this->speed = speed; }
};
ostream& operator<<(ostream&os, Modem& md)
{
	os << "Name:\t\t\t" << md.name << endl << "Speed/Price:\t\t" << md.speed << '/' << md.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Modem& md)
{
	is >> md.name >> md.speed >> md.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Monitor]-----------------------------------------------------------------------------------------------------------------------//
class Monitor : public Father
{
private:
	string resolution;
	string diagonal;
	short int frequency;

public:
	Monitor() : Father() { this->resolution = " "; this->diagonal = " "; this->frequency = 0; this->type = "Monitor"; }
	Monitor(string name, string resolution, string diagonal, short int frequency, long int price) : Father(name, "Monitor", price) { this->resolution = resolution; this->diagonal = diagonal; this->frequency = frequency; this->type = "Monitor"; }
	Monitor(const Monitor &mo) { this->name = mo.name; this->diagonal = mo.diagonal; this->frequency = mo.frequency; this->price = mo.price; this->resolution = mo.resolution; }

	void print() { cout << "Name:\t\t\t" << name << endl << "Resolution/Diagonal:\t" << resolution << '/' << diagonal << endl << "Frequency/Price:\t" << frequency << '/' << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, string resolution, string diagonal, short int frequency, long int price) { this->name = name; this->price = price; this->resolution = resolution; this->diagonal = diagonal; this->frequency = frequency; this->type = "Monitor"; }

	friend ostream& operator<<(ostream&os, Monitor& mo);
	friend istream& operator >> (istream&is, Monitor& mo);

	string GetResolution() { return resolution; }
	string GetDiagonal() { return diagonal; }
	short int GetFrequency() { return frequency; }

	void SetResolution(string resolution) { this->resolution = resolution; }
	void SetDiagonal(string diagonal) { this->diagonal = diagonal; }
	void SetFrequency(short int frequency) { this->frequency = frequency; }
};
ostream& operator<<(ostream&os, Monitor& mo)
{
	os << "Name:\t\t\t" << mo.name << endl << "Resolution/Diagonal:\t" << mo.resolution << '/' << mo.diagonal << endl << "Frequency/Price:\t" << mo.frequency << '/' << mo.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Monitor& mo)
{
	is >> mo.name >> mo.resolution >> mo.diagonal >> mo.frequency >> mo.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//---------------------------------------------------------------------------------[Printer]-----------------------------------------------------------------------------------------------------------------------
class Printer : public Father
{
private:
	short int speed;
	string resource;
	short int capacity;

public:
	Printer() : Father() { this->capacity = 0; this->resource = " "; this->speed = 0; this->type = "Printer"; }
	Printer(string name, short int speed, string resource, short int capacity, long int price) : Father(name, "Printer", price) { this->speed = speed; this->resource = resource; this->capacity = capacity; this->type = "Printer"; }
	Printer(const Printer &pr) { this->capacity = pr.capacity; this->name = pr.name; this->price = pr.price; this->resource = pr.resource; this->speed = pr.speed; }

	void print() { cout << "Name/Type:\t\t" << name << endl << "Speed/Resource:\t\t" << speed << '/' << resource << endl << "Capacity/Price:\t\t" << capacity << '/' << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, short int speed, string resource, short int capacity, long int price) { this->name = name; this->price = price; this->speed = speed; this->resource = resource; this->capacity = capacity; this->type = "Printer"; }

	friend ostream& operator<<(ostream&os, Printer& pr);
	friend istream& operator >> (istream&is, Printer& pr);

	short int GetSpeed() { return speed; }
	string GetResource() { return resource; }
	short int GetCapacity() { return capacity; }

	void SetSpeed(short int speed) { this->speed = speed; }
	void SetResource(string resource) { this->resource = resource; }
	void SetCapacity(short int capacity) { this->capacity = capacity; }
};
ostream& operator<<(ostream&os, Printer& pr)
{
	os << "Name:\t\t\t" << pr.name << endl << "Speed/Resource:\t\t" << pr.speed << '/' << pr.resource << endl << "Capacity/Price:\t\t" << pr.capacity << '/' << pr.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, Printer& pr)
{
	is >> pr.name >> pr.speed >> pr.resource >> pr.capacity >> pr.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------[Optical Drive]----------------------------------------------------------------------------------------------------------------------
class OpticalDrive : Father
{
private:
	bool out_or_in;//true out, false in
	short int read_speed;
	short int write_speed;
	string connection;

public:
	OpticalDrive() : Father() { this->out_or_in = true; this->read_speed = 0; this->write_speed = 0; this->connection = " "; this->type = "Optical Drive"; }
	OpticalDrive(string name, bool out_or_in, short int read_speed, short int write_speed, string connection, long int price) : Father(name, "Optical Drive", price) { this->out_or_in = out_or_in; this->read_speed = read_speed; this->write_speed = write_speed; this->connection = connection; this->type = "Optical Drive"; }
	OpticalDrive(const OpticalDrive &od) { this->name = od.name; this->connection = od.connection; this->out_or_in = od.out_or_in; this->price = od.price; this->read_speed = od.read_speed; this->write_speed = od.write_speed; }

	void print() { cout << "Name/Type:\t\t" << name << endl << "Read/Write speed:\t" << read_speed << '/' << write_speed << endl << "Out or In/Connection:\t"; if (out_or_in == true) cout << "Out/"; else cout << "In/"; cout << connection << endl << "Price:\t\t\t" << price << endl << "---------------------------------------------]" << endl; }
	void edit(string name, bool out_or_in, short int read_speed, short int write_speed, string connection, long int price) { this->name = name; this->price = price; this->out_or_in = out_or_in; this->read_speed = read_speed; this->write_speed = write_speed; this->connection = connection; this->type = "Optical Drive"; }

	friend ostream& operator<<(ostream&os, OpticalDrive &od);
	friend istream& operator >> (istream&is, OpticalDrive &od);

	bool GetOut_or_in() { return out_or_in; }
	short int GetRead_speed() { return read_speed; }
	short int GetWrite_speed() { return write_speed; }
	string GetConnection() { return connection; }

	void SetOut_or_in(bool out_or_in) { this->out_or_in = out_or_in; }
	void SetRead_speed(short int read_speed) { this->read_speed = read_speed; }
	void SetWrite_Speed(short int write_speed) { this->write_speed = write_speed; }
};
ostream& operator<<(ostream&os, OpticalDrive &od)
{
	os << "Name:\t\t\t" << od.name << endl << "Read/Write speed:\t" << od.read_speed << '/' << od.write_speed << endl << "Out or In/Connection:\t"; if (od.out_or_in == true) os << "Out/"; else os << "In/"; os << od.connection << endl << "Price:\t\t\t" << od.price << endl << "---------------------------------------------]";
	return os;
}
istream& operator >> (istream&is, OpticalDrive &od)
{
	is >> od.name >> od.read_speed >> od.write_speed >> od.out_or_in >> od.connection >> od.price;
	return is;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#endif // !_TECHSHOP_H_