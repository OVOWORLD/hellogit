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
Ship(string x , string y, float z)
{
setShipname(x);
setShiptype(y);
setMaxspeed(z);
}
void setShipname(string a)
{
Shipname=a;
}
string getShipname(){
return Shipname;
}
void setShiptype(string b)
{
Shiptype=b;
}
string getShiptype(){
return Shiptype;
}
void setMaxspeed(float c)
{
Maxspeed=c;
}
float getMaxspeed(){
return Maxspeed;
}
};



