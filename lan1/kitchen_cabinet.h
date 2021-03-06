	#pragma once
#include <cassert>
#include <string>
#include "vector.h"
#include "rectangle.h"
#include "kitchen_vector.h"

class kitchen_cabinet : public rectangle
{
private:
	std::string material;
public:
	kitchen_cabinet(const std::string& str) : rectangle()
	{
		material = str;
	}
	kitchen_cabinet()
	{
	}
	kitchen_cabinet(const kitchen_cabinet& cabinet) : rectangle(cabinet)
	{
		material = cabinet.material;
		size = cabinet.size;

	}
	std::string getmat();
	virtual int get_type() override;
	virtual bool can_i_stand_here(const kitchen_vector<rectangle*>& plan, int i) override;
	virtual std::string get_name_size() override;
	friend std::istream& operator>>(std::istream& ins, kitchen_cabinet& elem);
	friend std::ostream& operator<<(std::ostream& os, kitchen_cabinet& elem);
};