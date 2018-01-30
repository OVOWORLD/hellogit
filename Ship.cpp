//Ship.cpp
#include<iostream>
#include<string>
#include"Ship.h"
#include<vector>
using namespace std;

int main(){
string name;
string type;
float num=0;

vector<Ship> Myships;
cout << "How many ships are registering? " << endl;
int ships=0;
cin >> ships;

for(unsigned i=0; i<ships; i++)
{
cout << "Enter the ship's name ";
cin >> name;
cout << "Enter the ship's type ";
cin >> type;
cout <<"Enter the max speed of the ship ";
cin >> num;

Ship boat(name, type, num);
Myships.push_back(boat);
cout << endl;
}

for(unsigned i=0; i<Myships.size();i++)
{
cout << "Ship name: " << Myships[i].getShipname() <<endl;
cout << "Ship type: " << Myships[i].getShiptype() <<endl;
cout << "Ship maxspeed: " << Myships[i].getMaxspeed() <<endl;
cout <<endl;
}
return 0;
}
