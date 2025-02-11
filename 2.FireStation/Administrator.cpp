#include "Administrator.h"

std::string Administrator::GetName() const
{
    return title + " " + lastName + " " + firstName;
}
