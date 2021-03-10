#pragma once
#include "rectangle.h"
#include "kitchen_vector.h"
#include <string>
#include "tech.h"
#include "kitchen_cabinet.h"
class kitchen_plan
{
private:
	kitchen_vector <rectangle*> appleinces;
public:
	bool good_plan();
	kitchen_plan(const kitchen_vector <rectangle*>& app)
	{
		appleinces = app;
	}
	kitchen_plan()
	{

	}
	void readfile();
	void writedown();
};
