#include "Data.h"
#include <math.h>

namespace Infoledger {
/*************************************************/
void Data::Print() {
    std::cout << "Type: " << type << ", Content: " << content->operator()() << ", Skill: " << skill;
}
/*************************************************/
<<<<<<< HEAD
Data& Data::operator=(Data& d) {
    if(this!=&d) {
        this->type = d.type;
        this->content = d.content;
        this->skill = d.skill;
    }
    return *this;
}
/*************************************************/
Data& Data::operator/(Data& d) {
    // common denominator
    Data* data;
    if ((this->type==d.type)&&(this->content==d.content)) {
        data = this;
        data->skill = (this->skill < d.skill) ? this->skill : d.skill;
    } else {
        data = new Data(DataType::ERROR);
    }
    return *data;
}
/*************************************************/
Data& Data::operator*(Data& d) {
    Data* data;
    if ((this->type==d.type)&&(this->content==d.content)) {
        data = this;
        data->skill = (this->skill < d.skill) ? this->skill+std::sqrt(d.skill) : d.skill+std::sqrt(this->skill);
    } else {
        data = new Data(DataType::ERROR);
    }
    return *data;
=======
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
>>>>>>> cbf14ce8b98394d63a078c91818b0240a3230723
}
/*************************************************/
}
