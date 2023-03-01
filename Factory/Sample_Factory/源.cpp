#include<iostream>
using namespace std;

//warrior, bad_guy

class warrior
{
public:
	warrior(int n1, int n2, int n3) : hp(n1), attack(n2), mp(n3)
	{ }

	virtual void R() = 0;

	virtual ~warrior(){}
protected:
	int hp;
	int attack;
	int mp;
};

class W_mege: public warrior
{
public:
	W_mege(int n1, int n2, int n3):warrior( n1,  n2,  n3)
	{}
	virtual void R()
	{
		cout << "mege Unleash hero skills" << endl;
	}
private:

};

class W_fighter : public warrior
{
public:
	W_fighter(int n1, int n2, int n3):warrior(n1, n2, n3)
	{}

	virtual void R()
	{
		cout << "fighter Unleash hero skills" << endl;
	}

};

class W_shooter : public warrior
{
public:
	W_shooter(int n1, int n2, int n3) :warrior(n1, n2, n3)
	{}

	virtual void R()
	{
		cout << "shooter Unleash hero skills" << endl;
	}

};

int main()
{
	warrior* f = new W_fighter(200, 10, 50);
	warrior* m = new W_mege(50, 50, 100);

	f->R();
	m->R();


	delete f, m;
	return 0;
}