#pragma once 
#include "rectangle.h"
#include <vector>
#include "kitchen_vector.h"
#include <string>



class technic : public rectangle
{
protected:
	std::string name;
public:
	technic()
	{}
	technic(const technic& A)
	{
		size = A.size;
		coordinates = A.coordinates;
	}
	virtual bool can_i_stand_here(const kitchen_vector<rectangle*>& plan, int i) override;
	virtual int get_type() override;
	friend std::istream& operator>>(std::istream& ins, technic& elem);
	friend std::ostream& operator<<(std::ostream& os, technic& elem);
	virtual std::string get_name_size() override;
};
