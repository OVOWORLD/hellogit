//Ship.cpp
#include<iostream>
#include<string>
#include"Ship.h"
using namespace std;

Ship::Ship(string x , string y, float z)
{
setShipname(x);
setShiptype(y);
setMaxspeed(z);
}

void Ship::setShipname(string a)
{
Shipname=a;
}
string Ship::getShipname()
{
return Shipname;
}
void Ship::setShiptype(string b)
{
Shiptype=b;
}
string Ship::getShiptype()
{
return Shiptype;
}
void Ship::setMaxspeed(float c)
{
Maxspeed=c;
}
float Ship::getMaxspeed()
{
return Maxspeed;
}
