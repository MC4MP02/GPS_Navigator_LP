#pragma once
#include <string>
#include "Common.h"

class PuntDeInteresBase {

	protected:
		Coordinate m_coord;
		std::string m_name;


	public:		
		PuntDeInteresBase();
		PuntDeInteresBase(Coordinate coord, std::string name);

		std::string getName();
		Coordinate getCoord();
		virtual unsigned int getColor();

};

class PuntDeInteresBotigaSolucio:public PuntDeInteresBase
{
public:
	PuntDeInteresBotigaSolucio(){m_shop = " "; opening_hours = " "; m_wheelchair = "no";}
	PuntDeInteresBotigaSolucio(string name, Coordinate cord, string shop, string openingHours, string wheelchair) :PuntDeInteresBase(cord, name), m_shop(shop), opening_hours(openingHours), m_wheelchair(wheelchair) {}
	~PuntDeInteresBotigaSolucio() {}
	void setOpeningHours(string openingHours) { opening_hours = openingHours; }
	unsigned int getColor()
	{
		if (m_shop == "supermarket") return 0xA5BE00;
		else if (m_shop == "tobacco") return 0xFFAD69;
		else if (m_shop == "bakery") return 0xE85D75;
		else if (m_shop == "bakery" && m_wheelchair == "yes" && opening_hours == "06:00 - 22:00") return 0x4CB944;
		else return 0xEFD6AC;
		
	}
private:
	string m_shop;
	string opening_hours;
	string m_wheelchair;

};



class PuntDeInteresRestaurantSolucio : public PuntDeInteresBase
{
public:
	PuntDeInteresRestaurantSolucio(): m_cuisine(" "), m_wheelchair(" "){};
	PuntDeInteresRestaurantSolucio(string name, string mobilitat, Coordinate cord, string cos): PuntDeInteresBase(cord,name), m_cuisine(cos), m_wheelchair(mobilitat){}
	~PuntDeInteresRestaurantSolucio(){};

	string getMovilitatReduida(){return m_wheelchair;}
	string getCuisine() { return m_cuisine; }

	unsigned int getColor(){
		if(m_cuisine == "pizza" && m_wheelchair == "yes")  return 0x03FCBA;
		if(m_cuisine == "chinese") return 0xA6D9F7;
		if(m_wheelchair == "yes") return 0x251351;

		return PuntDeInteresBase::getColor();
	}

private: 
	string m_cuisine;
	string m_wheelchair;
};

