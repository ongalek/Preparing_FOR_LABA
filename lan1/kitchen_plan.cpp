#include "kitchen_plan.h"

bool kitchen_plan::good_plan()
{
    for (int i = 0; i < appleinces.get_size(); i++)
    {
        if (!appleinces[i]->can_i_stand_here(appleinces, i))
            return false;
    }
    return true;
}

void kitchen_plan::readfile()
{
	std::ifstream fin;
	fin.open("Z:\\file\\file.txt");
	while (fin)
	{
		char a;
		fin >> a;
		if (a == '0')
		{
			technic* A = new technic();
			fin >> *A;
			appleinces.push_back(A);
		}
		if (a == '1')
		{
			kitchen_cabinet* A = new kitchen_cabinet();
			fin >> *A;
			appleinces.push_back(A);
		}
	}
	fin.close();

}

void kitchen_plan::writedown()
{
	std::ofstream out;
	out.open("Z:\\file\\writefile.txt");
	{

		for (int i = 0; i < appleinces.get_size(); i++)
		{
			out << *appleinces[i];
			out << appleinces[i]->get_name_size() << '\n';

		}
	}
	out.close();
}


