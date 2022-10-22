#pragma once

#include "Common.h"
#include "MapaBase.h"
#include <vector>

class CamiBase {
public:
	virtual std::vector<Coordinate> getCamiCoords() = 0;
private:

};

class CamiSolucio : public CamiBase {
public:

	CamiSolucio* clone() { return new CamiSolucio(*this); }

	void setVectorCoord(vector<Coordinate> cami)
	{
		vector<Coordinate>::iterator it;
		for (it = cami.begin(); it != cami.end(); it++)
		{
			m_cami.push_back(*it);
		}
	}

	std::vector<Coordinate> getVectorCoord()
	{
		return m_cami;
	}

	std::vector<Coordinate> getCamiCoords()
	{
		Coordinate c1;
		c1.lat = 41.4928803;
		c1.lon = 2.1452381;

		Coordinate c2;
		c2.lat = 41.4929072;
		c2.lon = 2.1452474;

		Coordinate c3;
		c3.lat = 41.4933070;
		c3.lon = 2.1453852;

		Coordinate c4;
		c4.lat = 41.4939882;
		c4.lon = 2.1456419;

		m_cami.push_back(c1);
		m_cami.push_back(c2);
		m_cami.push_back(c3);
		m_cami.push_back(c4);

		return m_cami;
	}
private:
	vector<Coordinate> m_cami;
};