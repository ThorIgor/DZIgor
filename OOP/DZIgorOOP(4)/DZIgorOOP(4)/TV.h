#include<iostream>

using namespace std;

class TV
{
friend class Remote;
private:
	bool OnOff;
	int Loud;
	int Chanel;
	int CountChanel;
	int MaxLoud;
public:
	TV();
	TV(int CC, int ML = 100);

	void power();
	void nextChannel();
	void prevChannel();
	void incVolume();
	void decVolume();

	void print();
};

class Remote
{
public:
	void power(TV &tv);
	void nextChannel(TV &tv);
	void prevChannel(TV &tv);
	void incVolume(TV &tv);
	void decVolume(TV &tv);
	void goToChanel(TV &tv, const int &n);
};
