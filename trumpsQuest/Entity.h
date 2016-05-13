#ifndef Entity_h
#define Entity_h

#include <iostream>
#include <string>
using namespace std;

class Entity
{

protected:
	bool isAlive;
	int Health;
	int Defence;
	int Damage;
	int Gold;
	int Level;
	int Position;

public:
	Entity();
	~Entity();
	void setHealth(int hp);
	int  getHealth();

	void setAlive(bool ta);
	int  getAlive();

	void setDefence(int de);
	int  getDefence();

	void setDamage(int at);
	int  getDamage();

	void setGold(int gd);
	int getGold();

	void setLevel(int le);
	int getLevel();

	void setPosition(int po);
	int	 getPosition();
};


#endif

