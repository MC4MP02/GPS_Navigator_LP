#pragma once
#include "pch.h"

#include "Common.h"
#include "PuntDeInteresBase.h"
#include "CamiBase.h"


class MapaBase {

	public:
		virtual void getPdis(std::vector<PuntDeInteresBase*>&) = 0;
		virtual void getCamins(std::vector<CamiBase*>&) = 0;
		virtual void parsejaXmlElements(std::vector<XmlElement>& xmlElements) = 0;

};

class MapaSolucio : public MapaBase
{
public:
	MapaSolucio() {}
	void getCamins(std::vector<CamiBase*>&){

		
	}
	void parsejaXmlElements(std::vector<XmlElement>& xmlElements)
	{

	}
	void getPdis(std::vector<PuntDeInteresBase*>& pdis)
	{
		Coordinate coord1;
		coord1.lat = 41.4918606;
		coord1.lon = 2.1465411;
		PuntDeInteresBotigaSolucio p1("La Millor Pastisseria", coord1, "bakery", "", "");
		pdis.push_back(new PuntDeInteresBotigaSolucio(p1));

		Coordinate coord2;
		coord2.lat = 41.4902204;
		coord2.lon = 2.1406477;
		PuntDeInteresRestaurantSolucio p2("El Millor Restaurant", "yes", coord2, "regional");
		pdis.push_back(new PuntDeInteresRestaurantSolucio(p2));
	}
private:


};