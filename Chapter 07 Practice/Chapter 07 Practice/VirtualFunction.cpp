#include <iostream>

using namespace std;

class Character
{
	char id[100];
public:
	Character(const char* id)
	{
		strcpy_s(this->id, id);
	}
	virtual void citethrow() = 0;

	void move()
	{
		cout << "move" << endl;
	}
	 void attack()
	{
		cout << "attack" << endl;
	}
};

class Rogue : public Character
{
	char* id;
public:
	Rogue(const char* id) :Character(id){}

	void citethrow()
	{
		cout << "citethrow" << endl;
	}
};

class Management
{
private:
	Character* arr[100];
	int NumOfCharacter;

public:
	Management() :NumOfCharacter(0) {}

	void makecharacter(Character* c)
	{
		arr[NumOfCharacter++] = c;
	}
	~Management()
	{
		for (int i = 0; i < NumOfCharacter; i++)
			delete arr[i];
	}
};

//int main()
//{
//	Management maple;
//
//	Rogue* r = new Rogue("got");
//	maple.makecharacter(r);
//	r->attack();
//	return 0;
//}