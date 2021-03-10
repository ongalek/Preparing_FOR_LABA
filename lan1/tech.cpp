#include "tech.h"

bool technic::can_i_stand_here(const kitchen_vector<rectangle*> &plan, int k)
{
    for (int i = 0; i < plan.get_size(); i++)
    {
        if (i == k)
            continue;
        if (coordinates.z != 0)
        {
            if (coordinates.z == plan[i]->get_coordinates().z + plan[i]->get_size().z)
                if ((coordinates.x >= plan[i]->get_coordinates().x && coordinates.x + size.x <= plan[i]->get_coordinates().x + plan[i]->get_size().x)
                    && (coordinates.y >= plan[i]->get_coordinates().y && coordinates.x + size.x <= plan[i]->get_coordinates().y + plan[i]->get_size().y));
            else return false;
        }
    }
    return true;
}

int technic::get_type()
{
    return 0;
}

std::string technic::get_name_size()
{
    return name;
}

std::istream& operator>>(std::istream& ins, technic& elem)
{
    ins >> elem.name;
    ins >> elem.coordinates.x;
    ins >> elem.coordinates.y;
    ins >> elem.coordinates.z;
    ins >> elem.size.x;
    ins >> elem.size.y;
    ins >> elem.size.z;
    return ins;

}
std::ostream& operator<<(std::ostream& os, technic& elem)
{
   
    os << elem.coordinates.x << "  ";
    os << elem.coordinates.y << "  ";
    os << elem.coordinates.z << "  ";
    os << elem.size.x << "  ";
    os << elem.size.y << "  ";
    os << elem.size.z << "  ";
    return os;

}
