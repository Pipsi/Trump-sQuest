#include "Entity.h"

Entity::Entity() //constructer
{
	isAlive = false;
	Health = 0;
	Defence = 0;
	Damage = 0;
	Gold = 0;
	Level = 0;
	Position = 0;
}

Entity::~Entity() //deconstructor
{

}

void Entity::setAlive(bool ta) {
	isAlive = ta;
}

int Entity::getAlive() {
	return isAlive;
}


void Entity::setHealth(int hp) {
	Health = hp;
}

int Entity::getHealth() {
	return Health;
}

void Entity::setDefence(int de) {
	Defence = de;
}

int Entity::getDefence() {
	return Defence;
}

void Entity::setDamage(int at) {
	Damage = at;
}

int Entity::getDamage() {
	return Damage;
}

void Entity::setGold(int gd) {
	Gold = gd;
}

int Entity::getGold() {
	return Gold;
}
void Entity::setLevel(int le) {
	Level = le;
}

int Entity::getLevel() {
	return Level;
}

void Entity::setPosition(int po) {
	Position = po;
}

int Entity::getPosition() {
	return Position;
}