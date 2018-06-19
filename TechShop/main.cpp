//Моя попытка реализовать что-то серьезное
#include "TechShop.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define INTTOSTR Integer_To_String
#define STRTOINT String_To_Integer
///////////////////////////////////////////////////////////////////////////////////////////////////////////////



///////////////////////////////////////////////////////////////////////////////////////////////////////////////
string Integer_To_String(int number)
{
	stringstream temp;
	temp << number;
	return temp.str();
}
int String_To_Integer(string str)
{
	int temp = atoi(str.c_str());
	return temp;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////

struct TechShop
{
	vector<Scaner> scaner;
	vector<Laptop> laptop;
	vector<Hardware> hardware;
	vector<CPU> Cpu;
	vector<VideoCard> videocard;
	vector<Motherboard> motherboard;
	vector<Modem> modem;
	vector<Monitor> monitor;
	vector<Printer> printer;
	vector<OpticalDrive> opticaldrive;

	void print_scaner()
	{
		cout << "\t\t\tSCANER" << endl;
		cout << endl;
		xf(scaner.size())
			cout << scaner[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_laptop()
	{
		cout << "\t\t\tLAPTOP" << endl;
		cout << endl;
		xf(laptop.size())
			cout << laptop[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_hardware()
	{
		cout << "\t\t\tHARDWARE" << endl;
		cout << endl;
		xf(hardware.size())
			cout << hardware[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_Cpu()
	{
		cout << "\t\t\tCPU" << endl;
		cout << endl;
		xf(Cpu.size())
			cout << Cpu[i] << endl;

		cout << endl;
		cout << endl;

	}
	void print_videocard()
	{
		cout << "\t\t\tVIDEO CARD" << endl;
		cout << endl;
		xf(videocard.size())
			cout << videocard[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_motherboard()
	{
		cout << "\t\t\tMOTHERBOARD" << endl;
		cout << endl;
		xf(motherboard.size())
			cout << motherboard[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_modem()
	{
		cout << "\t\t\tMODEM" << endl;
		cout << endl;
		xf(modem.size())
			cout << modem[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_monitor()
	{
		cout << "\t\t\tMONITOR" << endl;
		cout << endl;
		xf(monitor.size())
			cout << monitor[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_printer()
	{
		cout << "\t\t\tPRINTER" << endl;
		cout << endl;
		xf(printer.size())
			cout << printer[i] << endl;

		cout << endl;
		cout << endl;
	}
	void print_opticaldrive()
	{
		cout << "\t\t\tOPTICAL DRIVE" << endl;
		cout << endl;
		xf(opticaldrive.size())
			cout << opticaldrive[i] << endl;

		cout << endl;
		cout << endl;
	}
};

struct Temp
{
	int num;
	string NAME;
	Scaner scaner;
	Laptop laptop;
	Hardware hardware;
	CPU Cpu;
	VideoCard videocard;
	Motherboard motherboard;
	Modem modem;
	Monitor monitor;
	Printer printer;
	OpticalDrive opticaldrive;
};
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	fstream file("Tech.txt", ios::in);
	if (!file)
		cerr << "Error, check your file" << endl;
	else
	{
		int res = 1;
		TechShop tech;
		Temp temp;
		cout << "WELCOME TO THE TECH SHOP" << endl;
		_getch();
		cout << "Loading...." << endl;
		while (!file.eof())
		{
			getline(file, temp.NAME, '!');
			file >> temp.num;

			if (temp.NAME.find('\n') == '\0' || temp.NAME.find('\n') == 1)
			{
				string t(temp.NAME.size() - 1, '0');
				for (int i = 1, i1 = 0; i < temp.NAME.length(); i++, i1++)
					t[i1] = temp.NAME[i];

				temp.NAME = t;
			}
			if (temp.NAME == "Scaner")
			{
				xf(temp.num)
				{
					file >> temp.scaner;
					tech.scaner.push_back(temp.scaner);
				}
			}
			else if (temp.NAME == "Laptop")
			{
				xf(temp.num)
				{
					file >> temp.laptop;
					tech.laptop.push_back(temp.laptop);
				}
			}
			else if (temp.NAME == "Hardware")
			{
				xf(temp.num)
				{
					file >> temp.hardware;
					tech.hardware.push_back(temp.hardware);
				}
			}
			else if (temp.NAME == "CPU")
			{
				xf(temp.num)
				{
					file >> temp.Cpu;
					tech.Cpu.push_back(temp.Cpu);
				}
			}
			else if (temp.NAME == "Video Card")
			{
				xf(temp.num)
				{
					file >> temp.videocard;
					tech.videocard.push_back(temp.videocard);
				}
			}
			else if (temp.NAME == "Motherboard")
			{
				xf(temp.num)
				{
					file >> temp.motherboard;
					tech.motherboard.push_back(temp.motherboard);
				}
			}
			else if (temp.NAME == "Modem")
			{
				xf(temp.num)
				{
					file >> temp.modem;
					tech.modem.push_back(temp.modem);
				}
			}
			else if (temp.NAME == "Monitor")
			{
				xf(temp.num)
				{
					file >> temp.monitor;
					tech.monitor.push_back(temp.monitor);
				}
			}
			else if (temp.NAME == "Printer")
			{
				xf(temp.num)
				{
					file >> temp.printer;
					tech.printer.push_back(temp.printer);
				}
			}
			else if (temp.NAME == "Optical Drive")
			{
				xf(temp.num)
				{
					file >> temp.opticaldrive;
					tech.opticaldrive.push_back(temp.opticaldrive);
				}
			}
		}

		while (res != 0)
		{
			ss
				cout << "What would you like to do?\n1)Search and show or delete\n2)Save/Load\n0)Exit" << endl;
			cin >> res;
			if (res == 1)
			{
				ss
					cout << "1)Show all\n2)Other" << endl;
				cin >> res;
				if (res == 1)
				{
					tech.print_scaner();
					tech.print_laptop();
					tech.print_hardware();
					tech.print_Cpu();
					tech.print_videocard();
					tech.print_motherboard();
					tech.print_modem();
					tech.print_monitor();
					tech.print_printer();
					tech.print_opticaldrive();
					cout << "That's it" << endl;
					_getch();
				}
				else if (res == 2)
				{
					ss
						cout << "Choose Technique:\n1)Scaner\n2)Laptop\n3)Hardware\n4)CPU\n5)Video Card\n6)Motherboard\n7)Modem\n8)Monitor\n9)Printer\n10)Optical Drive" << endl;
					cin >> res;
					if (res == 1)
					{
						string s;
						ss
							cout << "Enter key(form)" << endl;
						cin >> s;
						xf(tech.scaner.size())
							if (tech.scaner[i].getForm() == s)
							{
								tech.scaner[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.scaner.erase(tech.scaner.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 2)
					{
						int s;
						ss
							cout << "Enter key(price)" << endl;
						cin >> s;
						xf(tech.laptop.size())
							if (tech.laptop[i].GetPrice() == s)
							{
								tech.laptop[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.laptop.erase(tech.laptop.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 3)
					{
						int s;
						ss
							cout << "Enter key(capacity)" << endl;
						cin >> s;
						xf(tech.hardware.size())
							if (tech.hardware[i].GetCapacity() == s)
							{
								tech.hardware[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.hardware.erase(tech.hardware.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 4)
					{
						double s;
						ss
							cout << "Enter key(Frequency)" << endl;
						cin >> s;
						xf(tech.Cpu.size())
							if (tech.Cpu[i].GetFrequency() == s)
							{
								tech.Cpu[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.Cpu.erase(tech.Cpu.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 5)
					{
						short int s;
						ss
							cout << "Enter key(capacity)" << endl;
						cin >> s;
						xf(tech.videocard.size())
							if (tech.videocard[i].GetCapacity() == s)
							{
								tech.videocard[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.videocard.erase(tech.videocard.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 6)
					{
						string s;
						ss
							cout << "Enter key(form)" << endl;
						cin >> s;
						xff(tech.motherboard.size())
							if (tech.motherboard[i].getForm() == s)
							{
								tech.motherboard[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.motherboard.erase(tech.motherboard.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 7)
					{
						short int s;
						ss
							cout << "Enter key(speed)" << endl;
						cin >> s;
						xff(tech.modem.size())
							if (tech.modem[i].GetSpeed() == s)
							{
								tech.modem[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.modem.erase(tech.modem.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 8)
					{
						string s;
						ss
							cout << "Enter key(Diagonal)" << endl;
						cin >> s;
						xff(tech.monitor.size())
							if (tech.monitor[i].GetDiagonal() == s)
							{
								tech.monitor[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.monitor.erase(tech.monitor.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 9)
					{
						short int s;
						ss
							cout << "Enter key(speed)" << endl;
						cin >> s;
						xff(tech.printer.size())
							if (tech.printer[i].GetSpeed() == s)
							{
								tech.printer[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.printer.erase(tech.printer.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
					else if (res == 10)
					{
						short int s;
						ss
							cout << "Enter key(Write speed)" << endl;
						cin >> s;
						xff(tech.opticaldrive.size())
							if (tech.opticaldrive[i].GetWrite_speed() == s)
							{
								tech.opticaldrive[i].print();
								string st;
								cout << "Want to delete it?(Yes/No)" << endl;
								cin >> st;
								if (st == "Yes" || st == "yes" || st == "y")
								{
									tech.opticaldrive.erase(tech.opticaldrive.begin() + i);
									break;
								}
							}

						cout << "That's it!" << endl;
						_getch();
					}
				}
			}
			else if (res == 2)
			{
				ss
					cout << "1)Save\n2)Load" << endl;
				cin >> res;
				if (res == 1)
				{
					file.close();
					file.open("tech_save.txt", ios::out);

					file << "\t\t\tSCANER" << endl;
					file << endl;
					xf(tech.scaner.size())
						file << tech.scaner[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tLAPTOP" << endl;
					file << endl;
					xf(tech.laptop.size())
						file << tech.laptop[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tHARDWARE" << endl;
					file << endl;
					xf(tech.hardware.size())
						file << tech.hardware[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tCPU" << endl;
					file << endl;
					xf(tech.Cpu.size())
						file << tech.Cpu[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tVIDEO CARD" << endl;
					file << endl;
					xf(tech.videocard.size())
						file << tech.videocard[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tMOTHERBOARD" << endl;
					file << endl;
					xf(tech.motherboard.size())
						file << tech.motherboard[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tMODEM" << endl;
					file << endl;
					xf(tech.modem.size())
						file << tech.modem[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tMONITOR" << endl;
					file << endl;
					xf(tech.monitor.size())
						file << tech.monitor[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tPRINTER" << endl;
					file << endl;
					xf(tech.printer.size())
						file << tech.printer[i] << endl;

					file << endl;
					file << endl;

					file << "\t\t\tOPTICAL DRIVE" << endl;
					file << endl;
					xf(tech.opticaldrive.size())
						file << tech.opticaldrive[i] << endl;

					file << endl;
					file << endl;
					cout << "That's it!" << endl;
					_getch();
				}
				else if (res == 2)
				{
					file.close();
					file.open("Tech.txt", ios::in);

					cout << "Loading...." << endl;
					while (!file.eof())
					{
						getline(file, temp.NAME, '!');
						file >> temp.num;

						if (temp.NAME.find('\n') == '\0' || temp.NAME.find('\n') == 1)
						{
							string t(temp.NAME.size() - 1, '0');
							for (int i = 1, i1 = 0; i < temp.NAME.length(); i++, i1++)
								t[i1] = temp.NAME[i];

							temp.NAME = t;
						}
						if (temp.NAME == "Scaner")
						{
							xf(temp.num)
							{
								file >> temp.scaner;
								tech.scaner.push_back(temp.scaner);
							}
						}
						else if (temp.NAME == "Laptop")
						{
							xf(temp.num)
							{
								file >> temp.laptop;
								tech.laptop.push_back(temp.laptop);
							}
						}
						else if (temp.NAME == "Hardware")
						{
							xf(temp.num)
							{
								file >> temp.hardware;
								tech.hardware.push_back(temp.hardware);
							}
						}
						else if (temp.NAME == "CPU")
						{
							xf(temp.num)
							{
								file >> temp.Cpu;
								tech.Cpu.push_back(temp.Cpu);
							}
						}
						else if (temp.NAME == "Video Card")
						{
							xf(temp.num)
							{
								file >> temp.videocard;
								tech.videocard.push_back(temp.videocard);
							}
						}
						else if (temp.NAME == "Motherboard")
						{
							xf(temp.num)
							{
								file >> temp.motherboard;
								tech.motherboard.push_back(temp.motherboard);
							}
						}
						else if (temp.NAME == "Modem")
						{
							xf(temp.num)
							{
								file >> temp.modem;
								tech.modem.push_back(temp.modem);
							}
						}
						else if (temp.NAME == "Monitor")
						{
							xf(temp.num)
							{
								file >> temp.monitor;
								tech.monitor.push_back(temp.monitor);
							}
						}
						else if (temp.NAME == "Printer")
						{
							xf(temp.num)
							{
								file >> temp.printer;
								tech.printer.push_back(temp.printer);
							}
						}
						else if (temp.NAME == "Optical Drive")
						{
							xf(temp.num)
							{
								file >> temp.opticaldrive;
								tech.opticaldrive.push_back(temp.opticaldrive);
							}
						}
					}

					ss
						cout << "That's it!" << endl;
				}
			}
			else if (res == 0)
				break;
			res = 1;
		}
	}




	_getch();
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////