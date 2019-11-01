#include "Data.h"
#include <math.h>

namespace Infoledger {
/*************************************************/
void Data::Print() {
    std::cout << "Type: " << type << ", Content: " << content->operator()() << ", Skill: " << skill;
}
/*************************************************/
Data Data::operator/(Data& d) {
    // common denominator
    if ((this->type==d.type)&&(this->content==d.content)) {
        Data data = *this;
        data = *this;
        data.skill = (this->skill < d.skill) ? this->skill : d.skill;
        return data;
    }
    return Data(DataType::ERROR);
}
/*************************************************/
Data Data::operator*(Data& d) {
    if ((this->type==d.type)&&(this->content==d.content)) {
        Data data = *this;
        data = *this;
        auto skill = (this->skill < d.skill) ? this->skill+sqrt(this->skill-d.skill) : d.skill+sqrt(d.skill-this->skill);
        data.skill = skill;
        return data;
    }
    return Data(DataType::ERROR);
}
/*************************************************/
}
