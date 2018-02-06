//Ship.h
#include<string>
using namespace std;

class Ship
{
private:
string Shipname;
string Shiptype;
float Maxspeed;

public:
Ship(string x , string y, float z);
void setShipname(string a);
string getShipname();
void setShiptype(string b);
string getShiptype();
void setMaxspeed(float c);
float getMaxspeed();
};



